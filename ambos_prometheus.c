#include <exec/execbase.h>
#include <utility/tagitem.h>

#include <proto/exec.h>
/*-------------------------------------*/

/*----- AmBoSDataLibrary Includes -----*/
#include <libraries/AmBoSTags.h>

// #include <clib/ambosdata_protos.h>

// #include "AmBoSData.h"
#include "proto/ambosdata.h"

#include <stdio.h>

// not much to export 8]
char prometheus_buffer[128];

struct Library *AmBoSDataBase;

ULONG totalCalls;

APTR ADataSetTag(ULONG Tags, ...) { return ((APTR)ADataSet((struct TagItem *)&Tags)); }

ULONG AGetAttrTag(APTR handle, ULONG Tags, ...) {
    return ((ULONG)AGetAttr(handle, (struct TagItem *)&Tags));
}

ULONG ASetAttrTag(APTR handle, ULONG Tags, ...) {
    return ((ULONG)ASetAttr(handle, (struct TagItem *)&Tags));
}

int openamboslibs() {
    AmBoSDataBase = OpenLibrary("ambosdata.library", 7);
    if (AmBoSDataBase == NULL) {
        fprintf(stderr, "Couldn't open ambosdata.library. Is AmBoS running?\r\n");
        return 1;
    }

    return 0;
}

char *get_prometheus_metrics() {
    APTR Glob;
    Glob = ADataSetTag(DATASET_First, DATATYPE_Global, TAG_DONE);

    if (Glob) {
        /* Globaler Zugriff OK ! */

        /* Daten holen */
        if (AGetAttrTag(Glob, GLOBAL_AnrufeGesammt, &totalCalls, TAG_DONE) != FALSE) {
            sprintf(prometheus_buffer,
                    "# HELP ambos_calls Total number of calls\n"
                    "# TYPE ambos_calls counter\n"
                    "ambos_calls %u\n",
                    totalCalls);
        }
        ADataSetTag(DATASET_Free, Glob);
        return prometheus_buffer;
    } else {
        fprintf(stderr, "Couldn't open global datafile?\r\n");
        return NULL;
    }
}

void closeamboslibs() {
    if (AmBoSDataBase) {
        CloseLibrary(AmBoSDataBase);
        AmBoSDataBase = NULL;
    }
}