#include "task1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp1(const void* a, const void* b)
{
    return strlen(*(char**)a) - strlen(*(char**)b);
}

void lineSort(char* str[], int size)
{
    qsort(str, size, sizeof(char*), cmp1);
}

void printLines(const char* str[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%s", str[i]);
}

