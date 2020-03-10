#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

#define SIZE 256

extern void lineSort(char* str[], int size);

int main()
{
	int size = 0;
	char line[SIZE][SIZE] = { {0} };
	char* str[SIZE];
	FILE* fp, * rez;
	fp = fopen("111.txt", "rt");
	if (fp == NULL)
	{
		puts("File open erorr!");
		return 1;
	}
	while (fgets(line[size], SIZE, fp) != 0 && line[size][0] != '\n')
	{
		if (line[size][strlen(line[size]) - 1] == '\n')
		{
			line[size][strlen(line[size]) - 1] = 0; 
			str[size] = line[size];
			size++;
		}
	}
	fclose(fp);
	lineSort(str, size);
	rez = fopen("222.txt", "w");
	if (rez == NULL)
	{
		puts("File open erorr!");
		return 1;
	}
	printLinesToFile((const char**)str, size, fp);
	fclose(rez);
	return 0;
}