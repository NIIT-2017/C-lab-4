#include"task1.h"

void lineSort(char * str[], int size)
{
    for (int i = 0; i < size - 1; i++)
        {
            for (int j = size - 1; j > i; j--)
                {
                    if (strlen(str[j - 1]) > strlen(str[j]))
                        {
                            char * buf = str[j - 1];
                            str[j - 1] = str[j];
                            str[j] = buf;
                        }
                }
        }
}

void printLines(const char* str[], int size)
{
    for (int i = 0; i < size; i++)
        {
            printf("%d - %s \n",i + 1, str[i]);
        }
}
