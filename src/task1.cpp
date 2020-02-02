#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

int cmp(const void* a, const void* b)
{
	return strlen(*(char**)a) - strlen(*(char**)b);
}

void printLines(const char* str[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%s\n", str[i]);
	putchar('\n');

}

void lineSort(char* str[], int size)
{
	qsort(str, size, sizeof(char*), cmp);
}
