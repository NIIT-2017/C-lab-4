#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"

#define SIZE 256

void lineSort(char* str[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (strlen(str[i + 1]) < strlen(str[i]))
		{
			for (int j = 0; j <= i; j++)
			{
				if (strlen(str[i + 1]) < strlen(str[j]))
				{
					char* charbuf = str[i + 1];
					for (int k = i + 1; k > j; k--)
					{
						str[k] = str[k - 1];
					}
					str[j] = charbuf;
				}
			}

		}
	}
}
void printLines(const char* str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", str[i]);
	}
}