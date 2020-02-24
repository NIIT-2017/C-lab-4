#include "task1.h"

int max_line(char* str[], int size, int i)
{
    int min_strlen = size;

    while (i < size)
    {
        if (strlen(str[i]) < min_strlen)
            min_strlen = strlen(str[i]);

        i++;
    }

    return min_strlen;
}

void lineSort(char* str[], int size)
{
    int i = 0;
    int j = 0;
    char* p;
    while (i < size)
    {
        if (strlen(str[i]) == max_line(str, size, j))
        {
            p = str[j];
            str[j] = str[i];
            str[i] = p;

            j++;
            i = j;
        }
        else
            i++;
    }
}

void printLines(const char* str[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%s\n", str[i]);
}