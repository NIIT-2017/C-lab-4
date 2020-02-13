#include"task1.h"

void lineSort(char* str[], int size)
{
    for (int i = 0; i < size - 1; i++)                   // buble sort of an array of pointers 
        for (int j = size - 1; j > i; j--)
            if (strlen(str[j - 1]) > strlen(str[j]))
            {
                char * temp = str[j - 1];
                str[j - 1] = str[j];
                str[j] = temp;
            }
}
void printLines(const char* str[], int size)
{
    for (int j = 0; j < size; j++)
        printf("%s\n", str[j]);
}