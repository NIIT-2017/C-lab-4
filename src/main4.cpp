#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
#include <stdlib.h>
#include <string.h>



int main()
{
	char arr[SIZE][SIZE]={0};
	char* str[SIZE]={0};
	
	int i=0;

	FILE *fp= fopen("input.txt", "rt");
	//fp = fopen("input.txt", "r");
	if (fp == NULL)
	{
		puts("File not found");
		return 1;
	}

	while (i < SIZE && fgets(arr[i], SIZE, fp) != NULL)
	{
		str[i] = arr[i];
		i++;
	}

	lineSort(str, i);
	fclose(fp);


	fp = fopen("output.txt", "w+");
	printLinesToFile((const char**)str, i, fp);
	fclose(fp);
	return 0;
} 