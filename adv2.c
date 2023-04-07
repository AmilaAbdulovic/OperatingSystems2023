#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/sysinfo.h>
#include <string.h>

int main(int argc, char *argv[]) {
    struct sysinfo info;
    if (sysinfo(&info) != 0) {
        perror("Error getting system info");
        return 1;
    }

    time_t current_time = time(NULL);
    time_t uptime = current_time - info.uptime;

    int days = uptime / (24 * 3600);
    int hours = (uptime % (24 * 3600)) / 3600;
    int minutes = (uptime % 3600) / 60;
    int seconds = uptime % 60;

    if (argc == 1) {
        printf("System uptime: %d day(s), %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } else if (argc == 2 && strcmp(argv[1], "-") == 0) {
        freopen(NULL, "w", stdout);
        printf("System uptime: %d day(s), %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } else if (argc == 2) {
        freopen(argv[1], "w", stdout);
        printf("System uptime: %d day(s), %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } else {
        printf("Usage: %s [<filename> | -]\n", argv[0]);
        return 1;
    }

    return 0;
}