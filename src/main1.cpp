#include <stdio.h>
#include <string.h>
#include "task1.h"

#define A 5 // number of strings
#define B 20 // max length of string

int main()
{
    char arr[A][B];
    char *str[A];

    printf("Enter a group of lines:\n");

    for (int i = 0; i < A; i++)
    {
        fgets(arr[i], B, stdin);
        str[i] = arr[i];
        if (arr[i][strlen(arr[i]) - 1] == '\n')
            arr[i][strlen(arr[i]) - 1] = '\0';
    }

    lineSort(str, A);
    printf("\n");
    printLines((const char**)str, A);
    
    return 0;
}