#include <stdio.h>
#include <string.h>
#include "task4.h"

#define A 10 // number of strings
#define B 1024 // max length of string

int main()
{
    char arr[A][B];
    char *str[A];

    FILE *fp;
    fp = fopen("string.txt", "rt");

    if (fp == NULL)
    {
        puts("File open error!");
        return 1;
    }

    int i = 0;
    while (i < A && fgets(arr[i], B, fp) != NULL)
    {
        str[i] = arr[i];
        if (arr[i][strlen(arr[i]) - 1] == '\n')
            arr[i][strlen(arr[i]) - 1] = '\0';
        i++;
    }

    fclose(fp);

    lineSort(str, i);

    fp = fopen("sorted.txt", "w");

    printLinesToFile((const char**)str, i, fp);

    fclose(fp);

    return 0;
}