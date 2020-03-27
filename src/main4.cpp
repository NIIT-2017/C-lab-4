#pragma warning(disable : 4996)
#include"task4.h"
#include <stdio.h>
#include <string.h>
#define SIZE 256

extern void lineSort(char* str[], int size);

int main()
{
	int size = 0;
	char line[SIZE][SIZE] = { {0} };
	char* str[SIZE];
	FILE* fp, *rez;
	fp = fopen("stroki.txt", "rt");
	if (fp == NULL)
	{
		puts("File open erorr!");
		return 1;
	}	
	while (fgets(line[size], SIZE, fp) != 0 && line[size][0] != '\n')
	{
		if (line[size][strlen(line[size]) - 1] == '\n') //считывание начала строки
		{
			line[size][strlen(line[size]) - 1] = 0; //удаление \n
			str[size] = line[size]; //запись адреса элемента массива в массив указателей
			size++;
		}
	}
	fclose(fp);
	lineSort(str, size);
	rez = fopen("rezult.txt", "w");
	if (rez == NULL)
	{
		puts("File open erorr!");
		return 1;
	}
	printLinesToFile((const char**)str, size, fp);
	fclose(rez);
	return 0;
}