#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
	FILE* in;
	FILE* out;
	in = fopen("Lab4.txt", "rt");
	out = fopen("Lab4_Done.txt", "wt");
	if (in == NULL)
	{
		puts("File open erorr!");
		return 1;
	}

	int i = 0, count = 0;
	char arr[SIZE][256] = { 0 };
	char* p[SIZE] = { 0 };

	while (fgets(arr[i], 256, in) !=NULL)
	{
		if (arr[i][strlen(arr[i]) - 1] == '\n')
			arr[i][strlen(arr[i]) - 1] = '\0';
		p[i] = arr[i];
		i++;
	}
	lineSort(p, SIZE);
	printLinesToFile((const char**)p, SIZE, out);
	fcloseall();
	return 0;
}