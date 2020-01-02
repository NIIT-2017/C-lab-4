#include "task1.h"
#include <stdio.h>
#include <string.h>

#define SIZE 5


int main()
{
	int i = 0;
	char arr[SIZE][256] = { 0 };
	char* p[SIZE] = { 0 };
	printf("Enter string\n");
	while (i<SIZE)
	{
		fgets(arr[i], 256, stdin);
		if (arr[i][strlen(arr[i]) - 1] == '\n')
			arr[i][strlen(arr[i]) - 1] = '\0';
		p[i] = arr[i];
		i++;
	}
	lineSort(p, SIZE);
	printLines((const char**)p, SIZE);
	return 0;
}