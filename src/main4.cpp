#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#define strl 164
#define symbl 512
#include "task4.h"

int main()
{
    char* strBegin[strl] = { NULL };
    FILE* fp;
    fp = fopen("wisdom.txt", "rt");
    if (!fp)
    {
        puts("Error!");
        return 1;
    }
    
    char str[strl][symbl];
    int ch = 0;
    int size = 0;
    while (fgets(str[size], symbl, fp) && size < strl)
    {
        strBegin[size] = str[size];
        size++;
    }
    fclose(fp);
    fp = fopen("wisdom2.txt", "wt");
    if (!fp)
    {
        puts("Error!");
        return 1;
    }
    lineSort(strBegin, size);
    printLinesToFile((const char**)strBegin, size, fp);
    fclose(fp);

    return 0;
}

 