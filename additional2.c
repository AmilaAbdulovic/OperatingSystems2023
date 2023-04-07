#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/sysinfo.h>

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

    printf("System uptime: %d day(s), %02d:%02d:%02d\n", days, hours, minutes, seconds);

    return 0;
}