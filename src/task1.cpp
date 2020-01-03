#include <stdio.h>
#include <string.h>

void lineSort(char* str[], int size)
{
	char* bubble = NULL;
	int m = size;
	for (int k = 0; k < size; k++)
	{
		for (int i = 0; i < m; i++)
		{
			if (strlen(str[i]) > strlen(str[i + 1]))
			{
				bubble = str[i];
				str[i] = str[i + 1];
				str[i + 1] = bubble;
			}
		}
		m--;
	}
}
void printLines(const char* str[], int size)
{
	for (int i = 0; i <= size; i++)
		printf("%s\n", str[i]);
}