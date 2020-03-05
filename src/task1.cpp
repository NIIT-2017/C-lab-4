#include "task1.h"
#include <string.h>
#include <stdio.h>

void lineSort(char* str[], int size)
{
    char* buf = NULL;

    for (int x = 0; x < size - 1; x++)
    {
        for (int y = 0; y < size - 1 - x; y++)
            if (strlen(str[y]) > strlen(str[y + 1]))
            {
                buf = str[y + 1];
                str[y + 1] = str[y];
                str[y] = buf;

            }
    }

}
void printLines(const char* str[], int size)
{
    for (int z = 0; z <= size; z++)
        printf("%s\n", str[z]);


}
