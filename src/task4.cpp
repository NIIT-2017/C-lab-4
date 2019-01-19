#include <stdio.h>

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	fp = fopen("output.txt", "w");
	if (fp == NULL)
	{
		puts("File not found!");
	}
	int i;
	for (i = 0; i < size; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
	}
	fclose(fp);
}