#include "task1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char arrayOfStr[32][256];
    char *str[32];

    printf("Enter strings\n");

    int size = 0;
    do
    {
        fgets(arrayOfStr[size], 256, stdin);
        str[size] = arrayOfStr[size];
        if (arrayOfStr[size] != '\0' && arrayOfStr[size][strlen(arrayOfStr[size]) - 1] == '\n')
            arrayOfStr[size][strlen(arrayOfStr[size]) - 1] = '\0';
        size++;
    } while (*str[size - 1] && size - 1 < 511);
    size--;

    lineSort(str, size);
    printLines((const char**)str, size);
    
    return 0;
}