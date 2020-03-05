#include<stdio.h>
#include <string.h>
#include"task1.h"
#define size 256
#define line 3

int main()
{
    char str[line][size];
    char *p_str[size];
    int i = 0;
    printf("Enter %d lines: \n", line);

    while(i < line)
        {
            fgets(str[i], size, stdin);
            if (str[i][strlen(str[i]) - 1] == '\n')
                {
                    str[i][strlen(str[i]) - 1] = '\0';
                }
            p_str[i] = &str[i][0];
            i++;
        }

    lineSort(p_str, i);
    printLines((const char**)p_str, i);
    return 0;
}
