#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printLinesToFile(const char *str[],int size,FILE *fp) {
    int i = 0;
    for (i = 0; i<size; i++) {
        fprintf(fp, "%s\n", str[i]);
    }
}