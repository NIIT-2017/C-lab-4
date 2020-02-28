#include <stdio.h>
#include <string.h>
#include "task4.h"
#include "task1.h"

#define S 256

int main()
{
	char arr[S][S];
	char* str[S];
	FILE* fp= fopen("my_file.txt", "r");

	if (!fp)
	{
		puts("Error");
		return 1;
	}

	int Countlines = 0;
	while (fgets(arr[Countlines], 256, fp) != NULL)
	{
		if (arr[Countlines][strlen(arr[Countlines]) - 1] == '\n')
			arr[Countlines][strlen(arr[Countlines]) - 1] = '\0';
		str[Countlines] = arr[Countlines];
		Countlines++;
	}

	fclose(fp);

	lineSort(str, Countlines);

	FILE* fp_w = fopen("res.txt", "w");

	printLinesToFile((const char**)str, Countlines, fp_w);

	fclose(fp_w);

	return 0;
}
