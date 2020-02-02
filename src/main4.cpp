#define _CRT_SECURE_NO_WARNINGS

#include "task4.h"
#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp;
    fp = fopen("C:\\Labs\\Item.txt", "r");
    
    char arrayOfStr[32][256];
    char* str[32];

    int size = 0;

    while (fgets(arrayOfStr[size], 256, fp) && size -1 < 511)
    {
        str[size] = arrayOfStr[size];
        if (arrayOfStr[size] != '\0' && arrayOfStr[size][strlen(arrayOfStr[size]) - 1] == '\n')
            arrayOfStr[size][strlen(arrayOfStr[size]) - 1] = '\0';
        size++;
    }

    fclose(fp);

    lineSort(str, size);

    fp = fopen("C:\\Labs\\Output.txt", "w");

    printLinesToFile((const char**)str, size, fp);

    fclose(fp);

    return 0;
}