#include <stdio.h>
#include <string.h>

void lineSort(char* str[], int size) //функция сортирующая массив указателей
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (strlen(str[i]) > strlen(str[j]))//цикл сортировки строк пол длинне
			{
				char* t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	}
}
