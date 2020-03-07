project(ambos-exporter C)

add_executable(ambos-exporter main.c ambos_prometheus.c)
target_include_directories(ambos-exporter PUBLIC ambos/include)