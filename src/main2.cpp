#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char in[SIZE] = { 0 };
	char out[SIZE] = { 0 };

	printf("enter the string\n");

	fgets(in, SIZE, stdin);
	if (in[strlen(in) - 1] == '\n') 
	{
		in[strlen(in) - 1] = 0;
	}

	printf("%s\n", reverseWords(in, out));

	return 0;
}