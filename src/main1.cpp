#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

#define SIZE 256

int main()
{

	char arr[SIZE][SIZE] = { 0 };
	char* str[SIZE] = { 0 };

	int numbLines = 0;
	printf("enter the number of lines\n");
	scanf("%i", &numbLines);

	for (int i = 0; i < numbLines; i++)
	{
		scanf("%s", arr[i]);
		str[i] = arr[i];
	}

	lineSort(str, numbLines);
	printLines((const char**)str, numbLines);

	return 0;
}