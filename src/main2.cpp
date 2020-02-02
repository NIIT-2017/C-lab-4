#include "task2.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char in[256] = {0};
	char out[256] = { 0 };
	printf("Please enter string\n");
	fgets(in, 256, stdin);
	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';
	printf("%s",reverseWords(in, out));
	return 0;
}