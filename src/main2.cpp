#include "tadk2.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256

int main()
{
	char in[SIZE];
	char out[SIZE];

	printf("Input the line\n");
	fgets(in, 256, stdin);

	if (in[strlen(in) - 1] == '\n')
	{
		in[strlen(in) - 1] = 0;
	}

	printf("%s", reverseWords(in, out));
	return 0;
}