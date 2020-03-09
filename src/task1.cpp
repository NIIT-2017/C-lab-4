#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compar(const void* p1, const void* p2)
{
	return strlen(*(char**)p1) - strlen(*(char**)p2);
}

void lineSort(char *str[], int size)
{
	qsort(str, size, sizeof(char*), compar);
}

void printLines(const char *str[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%s", str[i]);
}