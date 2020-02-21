#include "task4.h"
#include <stdio.h>
#include <string.h>
#define LINE 10
#define SIM 256

int main()
{
    FILE* fp;
    fp = fopen("text.txt", "r");

    char NewLine[LINE][SIM] = { 0 };
    char* save[LINE];

    int x = 0;

    for (; x < LINE; x++)
    {
        fgets(NewLine[x], SIM, fp);
        save[x] = NewLine[x];
        if (NewLine[x][strlen(NewLine[x]) - 1] == '\n')
            NewLine[x][strlen(NewLine[x]) - 1] = '\0';

        if (!strlen(NewLine[x]))
            break;
    }
    x--;
    fclose(fp);
    fp = fopen("text.txt", "w");
    lineSort(save, x);
    printLinesToFile((const char**)save, x, fp);
    fclose(fp);
    return 0;
}