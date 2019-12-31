#include <stdio.h>
#include <stdlib.h>
# include <string.h>



int cmp(const void* a, const void* b) {
    if (strlen(*(char**)a) < strlen(*(char**)b)) {
        return -1;
    }
    else if (strlen(*(char**)a) > strlen(*(char**)b)) {
        return 1;
    }
    else return 0;
}

void lineSort(char* str[], int size) {
    qsort(str, size, sizeof(char*), cmp);
 
}



void printLines(const char* str[], int size) {
    for (int i = 0; i < size; i++)
        printf("%s", str[i]);
    puts("");
}