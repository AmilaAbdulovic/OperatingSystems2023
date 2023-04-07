#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <pattern> <filename>\n", argv[0]);
        return 1;
    }

    char *pattern = argv[1];
    char *filename = argv[2];

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE_LEN];
    int line_num = 0;

    while (fgets(line, MAX_LINE_LEN, file) != NULL) {
        line_num++;
        if (strstr(line, pattern) != NULL) {
            printf("%s:%d:%s", filename, line_num, line);
        }
    }

    fclose(file);

    return 0;
}
