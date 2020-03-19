#include <string.h>
#include <stdio.h>
#include "task4.h"
void lineSort(char* str[], int size)
{
	int i;
	int* len = new int[size];
	for (i = 0; i < size; i++)
	{
		len[i] = strlen(str[i]);
	}
	for (i = 0; i < size; i++)
	{
		for (int k = 0; k < size - i - 1; k++)
		{
			if (len[k] < len[k + 1])
			{
				int tmp = len[k];
				len[k] = len[k + 1];
				len[k + 1] = tmp;
				char* tmp1 = str[k];
				str[k] = str[k + 1];
				str[k + 1] = tmp1;
			}
		}
	}
}

void printLinesToFile(char** str, int size,FILE*fp)
{
	for (int i = 0; i < size; i++)
	{
		fprintf(fp, "%s", str[i]);
	}
}