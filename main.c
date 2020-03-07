#include "ambos_prometheus.h"

#include <exec/execbase.h>

#include <libraries/bsdsocket.h>

#include <proto/bsdsocket.h>
#include <proto/exec.h>

#define PORT 9771
#define MAX_REQUEST_HEADER_LEN 2048
#define MAX_HEADER_LINE_LEN 256

// probably better to put on heap
char request_headers[MAX_REQUEST_HEADER_LEN];
char header_line[MAX_HEADER_LINE_LEN];

struct Library *SocketBase;

int openlibs() {
    SocketBase = OpenLibrary("bsdsocket.library", 4);
    if (SocketBase == NULL) {
        fprintf(stderr, "Couldn't open bsdsocket.library\n");
        return 1;
    }
    if (openamboslibs() != 0) {
        return 2;
    }
    return 0;
}

char *get_status_text(int http_status_code) {
    switch (http_status_code) {
        case 200:
            return "OK";
        case 400:
            return "Bad Request";
        case 500:
            return "Internal server error";
    }
    return NULL;
}

int write_header(int socket, const char *header_format, ...) {
    va_list args;
    va_start(args, header_format);
    vsprintf(header_line, header_format, args);
    va_end(args);
    if (send(socket, header_line, strlen(header_line), 0) == -1) {
        perror("Got error writing response headers");
        return 1;
    }
    return 0;
}

void send_response(int socket, int status_code, char *text) {
    char *status_text = get_status_text(status_code);
    if (status_text == NULL) {
        fprintf(stderr, "Broken status text for http error code %d", status_code);
        return;
    }
    if (write_header(socket, "HTTP/1.1 %d %s\r\n", status_code, status_text) != 0) {
        return;
    }
    if (write_header(socket, "Content-Type: text/plain\r\n") != 0) {
        return;
    }
    if (write_header(socket, "Content-Lenth: %d\r\n", strlen(text)) != 0) {
        return;
    }
    if (write_header(socket, "Connection: close\r\n") != 0) {
        return;
    }

    if (send(socket, "\r\n", 2, 0) == -1) {
        perror("Couldn't send header delimiter");
    }

    if (send(socket, text, strlen(text), 0) == -1) {
        perror("Couldn't send body");
    }
}

void send_error(int socket, int http_error_code, char *internal_reason) {
    send_response(http_error_code, http_error_code, "");
}

void handle_request(int socket) {
    LONG nbytes = recv(socket, request_headers, MAX_REQUEST_HEADER_LEN, 0);
    if (nbytes == -1) {
        perror("Got error reading headers");
        return;
    }
    if (nbytes < 4) {
        send_error(socket, 400, "Invalid HTTP request.");
        return;
    }

    // well need way more request handling but don't care for now
    char *metrics = get_prometheus_metrics();
    if (metrics == NULL) {
        send_error(socket, 500, "Couldn't get metrics");
    } else {
        send_response(socket, 200, metrics);
    }
}

int main(int argc, char const *argv[]) {
    int err = openlibs();
    if (err > 0) {
        return err;
    }
    int server_fd, new_socket;
    long valread;
    struct sockaddr_in address;
    socklen_t addrlen = 0;

    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("In socket");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    memset(address.sin_zero, '\0', sizeof address.sin_zero);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("In bind");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 10) < 0) {
        perror("In listen");
        exit(EXIT_FAILURE);
    }

    // unclear what happens when CTRL-C is pressed. for SAS-C this is well documented. But can't
    // find anything for gcc... should be closing libs etc. but it seems there is also some magic
    // cleanup involved?
    while (1) {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, &addrlen)) < 0) {
            perror("In accept");
            exit(EXIT_FAILURE);
        }

        handle_request(new_socket);
        CloseSocket(new_socket);
    }
    return 0;
}