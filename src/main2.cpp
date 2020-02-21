#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	char str[256], out[256];
	printf("Enter line: ");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	reverseWords(str, out);
	printf("\n%s\n", out);
	return 0;
}