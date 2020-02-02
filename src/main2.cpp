#include <stdio.h>
#include <string.h>
#include "task2.h"

void finishLine(char* line);

int main()
{
	char in[SIZE];
	char out[SIZE] = {0};
	printf("Enter a line:\n");
	fgets(in, SIZE, stdin);

	finishLine(in);

	printf("%s\n", reverseWords(in, out));

	return 0;
}


void finishLine(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}
