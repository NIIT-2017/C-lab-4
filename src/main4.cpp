#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"

int main()
{
	char str[256][256] = { 0 };
	char *p[256] = { 0 };
	int count = 0;

	FILE *fp;
	fp = fopen("input.txt", "r");
	if (fp == NULL)
	{
		puts("ERROR! INPUT FILE NOT FOUND!");
		return 1;
	}

	while (count < 256 && fgets(str[count], 256, fp) != NULL)
	{
		p[count] = str[count];
		count++;
	}

	fclose(fp);

	lineSort(p, count);



	fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		puts("ERROR! OUTPUT FILE NOT FOUND!");
		return 1;
	}

	printLinesToFile((const char**)p, count, fp);
	fclose(fp);

	puts("Done!");
	return 0;
} 
