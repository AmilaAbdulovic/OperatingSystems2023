#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <dirname>\n", argv[0]);
        return 1;
    }

    char *dirname = argv[1];

    if (mkdir(dirname, 0755) != 0) {
        perror("Error creating directory");
        return 1;
    }

    printf("Directory %s created successfully.\n", dirname);

    return 0;
}