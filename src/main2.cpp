#include <stdio.h>
#include "task2.h"

int main()
{
	char in[N] = { 0 };
	char out[N] = { 0 };

	printf("Enter a string: ");
	fgets(in, N, stdin);

	puts(reverseWords(in,out));
	return 0;
}