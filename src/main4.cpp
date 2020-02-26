#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../task1/task1.h"
#include "task4.h"
#define SIZE 50
int main()
{
	char str[SIZE][512] = { {0} };

	char * pstr[SIZE] = { 0 };
	int size = 0;

	FILE * fp;
	fp = fopen("wisdomR.txt", "rt");
	if (!fp) 
	{
		puts("File error!");
		return 1;
	}
	while (fgets(str[size], 512, fp)) 

	{
		if (str[size][strlen(str[size]) - 1] == '\n') 
		{
			str[size][strlen(str[size]) - 1] = 0;
		}
		pstr[size] = str[size];
		size++;
	}

	lineSort(pstr, size);
	
	FILE * fp1;
	fp1 = fopen("wisdomW.txt", "w");
	if (!fp1) 
	{
		puts("File error!");
		return 1;
	}
	printLinesToFile((const char**)pstr, size, fp1);
	fcloseall();
	
	return 0;
}