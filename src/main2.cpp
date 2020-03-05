#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"
#define N 256

int main()
{
	char in[N];
	char out[N] = { 0 };

	printf("Input a string to reverse:\n");
	fgets(in, N, stdin);

	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';


	puts("Reversed string:");
	printf("%s\n", reverseWords(in, out));

	return 0;
} 
