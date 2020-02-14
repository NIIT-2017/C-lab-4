#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"
#include "task1.h"

#define SIZE 256

int main()
{
	char arr[SIZE][SIZE] = { 0 };
	char* str[SIZE] = { 0 };

	FILE* fp_in = fopen("FILE.txt", "r");

	if (!fp_in)
	{
		puts("Error: file is not found");
		return 1;
	}

	int numbLines = 0;
	while (fgets(arr[numbLines], 256, fp_in) != NULL)
	{
		if (arr[numbLines][strlen(arr[numbLines]) - 1] == '\n')
			arr[numbLines][strlen(arr[numbLines]) - 1] = '\0';
		str[numbLines] = arr[numbLines];
		numbLines++;
	}

	fclose(fp_in);

	lineSort(str, numbLines);

	FILE* fp_out = fopen("FILE_out.txt", "w");

	printLinesToFile((const char**)str, numbLines, fp_out);

	fclose(fp_out);

	return 0;
}