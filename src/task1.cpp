#include <stdio.h>
#include <string.h>
void lineSort(char* str[], int size)
{
	char* ch = 0;
	for (int j = 1; j < size; j++)// Insert sort (сортировка методом простых всатвок)
	{
		int a = j;
		while  (a>0 && strlen(str[a-1])>strlen(str[a]))
		{
			ch = str[a-1];
			str[a-1] = str[a];
			str[a] = ch;
			a--;
		}
	}
}
void printLines(const char* str[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%s ", str[i]);
	}
}