#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "task1.h"
#include "task4.h"
#define LS 256
#define LNu 128



int main()
{
	char str[LNu][LS] = { NULL };
	char *p_str[LNu] = { NULL };
	int countLine = 0;
	FILE * fp;
	fp = fopen("Text1.txt", "r"); // r+ stays for read
	if (fp == NULL)
	{
		printf("Error! File not found");
		return 1;
	}
	while (countLine < LNu && fgets(str[countLine], LS, fp) != NULL)
	{
		p_str[countLine] = str[countLine];
		countLine++;
	}

	lineSort(p_str, countLine);
	fclose(fp);
	fp = fopen("Text2.txt", "w+");
	printLinesToFile((const char**)p_str, countLine, fp);
	fclose(fp);
	

	return 0;
}
