#include <stdio.h>
#include <string.h>
#include "task1.h"
#define SIZE 128
#define LINE 6
int main(void)
{
	char input[LINE][SIZE];
	char *pt_str[LINE];
	int i = 0;
	printf("Enter 6 lines for sorting\n");
	while (i < LINE && fgets(input[i], SIZE, stdin) != NULL &&  input[i][0] != '\n') //check /n
	{
		if (input[i][strlen(input[i]) - 1] == '\n')
			input[i][strlen(input[i]) - 1] = '\0';
		pt_str[i] = input[i];
		i++;
	}
	lineSort(pt_str, i);
	puts("result:");
	printLines((const char**)pt_str, i);
	return 0;
}