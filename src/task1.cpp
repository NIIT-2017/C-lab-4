#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
	return strlen(*(char**)a) - strlen(*(char**)b);
}

void lineSort(char *str[], int size) // sortiert das Array von Zeigern
{
	
	qsort(str, size, sizeof(char*), compare);

}

void printLines(const char *str[], int size) // druckt Zeilen aus je nach der Reihe des Array STR
{
	for (int i = 0; i < size; i++)
	{
		printf("%s", str[i]);
		if (str[i][strlen(str[i]) - 1] != '\n')
			putchar('\n');
	}
}
