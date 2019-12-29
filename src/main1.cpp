#define _CRT_SECURE_NO_WARNINGS
#define strl 10
#define symbl 256
#include <stdio.h>
#include "task1.h"


int main()
{
    char str[strl][symbl] = { {0} };
    char* strBegin[strl] = { NULL };
    int size = 0; // счетчик количества строк
    printf("write some strings. Max string number - %d\n", strl);
    while (*fgets(str[size], symbl, stdin) != '\n' && size < strl)
    {
        strBegin[size] = str[size];
        size++;
    }
    lineSort(strBegin, size);
    printLines((const char**)strBegin, size);
   
    return 0;
}