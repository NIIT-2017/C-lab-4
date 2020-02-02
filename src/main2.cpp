#include <stdio.h>
#include <string.h>
#include "task2.h"
#define SIZE 64

int main(void)
{
	char in[SIZE];
	char out[SIZE];
	printf("Enter a line:\n");
	fgets(in, SIZE, stdin);
	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';
	reverseWords(in, out);
	printf("result:\n");
	for (int z = 0; z < strlen(in); z++)
		printf("%c", out[z]);
	printf("\n");
	return 0;
}