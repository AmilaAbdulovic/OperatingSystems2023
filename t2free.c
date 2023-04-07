#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/sysinfo.h>

int main() {
    struct sysinfo mem_info;
    if (sysinfo(&mem_info) != 0) {
        fprintf(stderr, "Failed to retrieve system memory information\n");
        exit(EXIT_FAILURE);
    }
    printf("Total memory: %lu kB\n", mem_info.totalram / 1024);
    printf("Free memory: %lu kB\n", mem_info.freeram / 1024);
    printf("Used memory: %lu kB\n", (mem_info.totalram - mem_info.freeram) / 1024);
    return 0;
}
