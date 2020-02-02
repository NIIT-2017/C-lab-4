#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j > 0 && strlen(str[j - 1]) > strlen(str[j]))
        {
            char *value = str[j - 1];
            str[j - 1] = str[j];
            str[j] = value;
            j--;
        }
    }
}

void printLines(const char *str[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%s\n", *str++);
}