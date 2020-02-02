#include <stdio.h>
#include <string.h>
#include "task1.h"

#define B 20 // max length of string

int main()
{
    char arr[20][B];
    char *str[20];

    printf("Enter strings:\n");

    int i = 0;
    while (1)
    {
        fgets(arr[i], B, stdin);
        if (arr[i][0] == '\n') break;
        str[i] = arr[i];
        if (arr[i][strlen(arr[i]) - 1] == '\n')
            arr[i][strlen(arr[i]) - 1] = '\0';
        i++;
    }

    lineSort(str, i);

    printf("\n");
    printLines((const char**)str, i);

    return 0;
}