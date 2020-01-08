#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"
#include "task4.h"
#define SIZE 50

int main () {
    char str[SIZE][128];
    char* pstr[SIZE];
    int i = 0;

    FILE *fp = fopen("toRead.txt", "rt");
    if (!fp) {
        puts("Error!");
        return 1;
    }
    while (fgets(str[i], 128, fp)) {
        if (str[i][strlen(str[i])-1]== '\n') {
            str[i][strlen(str[i])-1] = 0;
        }
        pstr[i] = str[i];
        i++;
    }

    lineSort(pstr, i);
    FILE *fp1 = fopen("toWrite.txt", "w");
    if (!fp1) {
        puts("Error!");
        return 1;
    }
    printLinesToFile((const char**)pstr, i, fp1);
    fclose(fp1);
    fclose(fp);

    return 0;
}