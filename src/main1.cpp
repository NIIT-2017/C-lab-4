#include  "task1.h"
#include <stdio.h>
#include <string.h>
#define LINE 10
#define SIM 256

int main()
{
    char NewLine[LINE][SIM] = { 0 };
    char *save [LINE];

    printf("Enter your line: \n");
    int x = 0;

    for (; x < LINE; x++)
    {
        fgets(NewLine[x], SIM, stdin);
        save[x] = NewLine[x];
        if (NewLine[x][strlen(NewLine[x]) - 1] == '\n')
            NewLine[x][strlen(NewLine[x]) - 1] = '\0';

        if (!strlen(NewLine[x]))
            break;
    }

    lineSort(save, x);
    printLines((const char **)save, x);
    
    return 0;
}