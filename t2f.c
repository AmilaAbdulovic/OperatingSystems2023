
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_FORTUNE_LEN 1024
#define MAX_FORTUNE_NUM 1000

int main(int argc, char *argv[]) {
    char fortunes[MAX_FORTUNE_NUM][MAX_FORTUNE_LEN];
    int num_fortunes = 0;
    FILE *fp;
    char fortune[MAX_FORTUNE_LEN];
    
    // Load fortunes from file
    fp = fopen("/usr/share/games/fortunes/fortunes.dat", "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to open fortune file\n");
        exit(1);
    }
    
    while (fgets(fortune, MAX_FORTUNE_LEN, fp) != NULL) {
        if (fortune[0] == '%' && fortune[1] == '\n') {
            // Add fortune to array
            strncpy(fortunes[num_fortunes], fortune+2, MAX_FORTUNE_LEN);
        }
    }
}