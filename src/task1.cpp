//Clab4 task1

#include "task1.h"

int compare(const void* a, const void* b)
{
	return strlen(*(char**)a) - strlen(*(char**)b);
}

void lineSort(char* str[], int size)
{	
	qsort(str, size, sizeof(char**), compare);
}

void printLines(const char* str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", str[i]);
	}
}