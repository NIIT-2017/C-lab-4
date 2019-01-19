#include <stdio.h>
#include <string.h>
#include "task1.h"
#include "task4.h"
#define N 256
#define M 512

int main()
{
	char strings[N][M];
	char *str[N];
	int count = 0;

	FILE *fp;
	fp = fopen("input.txt", "r");
	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}

	while (count < N && fgets(strings[count], M, fp) != NULL && strings[count][0] != '\n')
	{
		if (strings[count][strlen(strings[count]) - 1] == '\n')
			strings[count][strlen(strings[count]) - 1] = '\0';

		str[count] = strings[count];
		count++;
	}
	fclose(fp);
	lineSort(str, count);
	printLinesToFile((const char**)str,count, fp);
	return 0;
}
