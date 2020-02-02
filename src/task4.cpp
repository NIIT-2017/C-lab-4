#include <stdio.h>

void printLinesToFile(const char *str[], int size, FILE *fp)
{
    for (int i = 0; i < size; i++)
        fprintf(fp, "%s\n", *str++);
}