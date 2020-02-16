#include <stdio.h>
#include <string.h>
#include "task1.h"

int main()
{
    char str[SIZE][128] = { {0} };
    char* pstr[SIZE] = { 0 };
    int size = 0;
    printf("Enter strings: \n");
      
    int i = 0;
    while(i < SIZE) 
    {
        fgets(str[i], 128, stdin);
        if (str[i][0] == '\n') 
        {
            break;
        }
        pstr[i] = str[i];
        size++;
        i++;
    }

    lineSort(pstr, size);
    printLines((const char**)pstr, size);

    return 0;
}