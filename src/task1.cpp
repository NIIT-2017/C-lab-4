#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)
{
    char* ch = NULL;
    if (*str[0])
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size - 1 - i; j++)
                if ( strlen(str[j]) > strlen(str[j + 1]))
                {
                    ch = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = ch;
                }

}

void printLines(const char* str[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", str[i]);
    }
}