#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "task1.h"
#define strl 164
#define symbl 512
#include "task4.h"

int main()
{
    char* strBegin[strl] = { NULL };
    FILE* fp1;
    fp1 = fopen("wisdom.txt", "rt");
    if (!fp1)
    {
        puts("Error!");
        return 1;
    }
    FILE* fp2;
    fp2 = fopen("wisdom2.txt", "wt");
    if (!fp2)
    {
        puts("Error!");
        return 1;
    }
    char str[strl][symbl];
    int ch = 0;
    int size = 0;
    while (fgets(str[size], symbl, fp1) && size < strl)
    {
        strBegin[size] = str[size];
        size++;
    }
    /*   for (int i = 0; i < size; i++)
           printf("%s", str[i]);*/
    lineSort(strBegin, size);
    printLinesToFile((const char**)strBegin, size, fp2);
    fcloseall();
    return 0;
}

 