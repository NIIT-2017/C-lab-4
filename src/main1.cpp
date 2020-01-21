#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task1.h"

#define SIZE 81
#define LINE 10

int main(void)
{
	char input[LINE][SIZE];
	char *pt_str[LINE];
	int i = 0; //for account entered lines

	printf("Enter %d lines for sorting\n", LINE);
	puts("for end enter <ENTER>:");

	while (i < LINE && fgets(input[i], SIZE, stdin) != NULL &&  input[i][0] != '\n')
		//if user enter enters the second time <Enter>, than input[i][0]=='\n'
	{
		if (input[i][strlen(input[i]) - 1] == '\n')
			input[i][strlen(input[i]) - 1] = '\0';

		pt_str[i] = input[i];  //copy addresses of entered lines
		i++;
	}

	lineSort(pt_str, i);
	puts("Sorted array of lines:");
	printLines((const char**)pt_str, i);

	return 0;
}
