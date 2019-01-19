#include <stdio.h>
#include <string.h>

void lineSort(char *str[], int size)
{
	int i, j;
	char *arr;

	for(i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
		{
			if (strlen(str[i]) < strlen(str[j]))
			{
				arr = str[i];
				str[i] = str[j];
				str[j] = arr;
			}
		}
}
void printLines(char *str[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		puts(str[i]);
}