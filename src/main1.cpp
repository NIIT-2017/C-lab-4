#include <stdio.h>
#include "task1.h"
#include <string.h>
#include <stdlib.h>
#define SIZE 256

int main()
{

	int crow = 0;

	char* pstr[SIZE];
	char str[SIZE][SIZE];

	puts("Enter a line (or empty line, to exit the programm) : ");

	while (fgets(str[crow], SIZE, stdin) != NULL && str[crow][0] != '\n')
	{
		pstr[crow] = str[crow];
		if (str[crow][strlen(str[crow]) - 1] == '\n')
		{
			str[crow][strlen(str[crow]) - 1] = '\0';
			crow++;
		}
	}

	lineSort(pstr, crow);
	printLines((const char**)pstr, crow);

	return 0;
}