#include <stdio.h>
#include <string.h>

void lineSort(char* str[], int size)
{
	char* bubble = NULL;
	
	for (int k = 0; k < size-1; k++)
		for (int i = 0; i < size-1-k; i++)
			if (strlen(str[i]) > strlen(str[i + 1]))
			{
				bubble = str[i];
				str[i] = str[i + 1];
				str[i + 1] = bubble;
			}
}

void printLines(const char* str[], int size)
{
	for (int i = 0; i <= size; i++)
		printf("%s\n", str[i]);
}
