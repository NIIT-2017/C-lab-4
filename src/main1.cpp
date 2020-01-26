//Clab4 task1

#include "task1.h"

int main()
{
	char buf[SIZE][SIZE];
	
	puts("Enter any numbers of lines and I will find the longest of them!");
	int i = 0;
	
	for (; i < SIZE; i++)
	{
		fgets(buf[i], SIZE, stdin);

		if (buf[i][0] == '\n')
			break;
	}

	int length = i;

	char *p[SIZE];

	for (int j = 0; j < SIZE; j++)
	{
		if (buf[j][0] != '\n')
			p[j] = buf[j];
	}

	lineSort(p, length);
	printLines((const char**)p, length);
	
	/*
	for (int i = 0; i < SIZE; i++)
	{
		if (buf[i][0] == '\n')
			break;

		printf("%s", buf[i]);
	}
	*/

	return 0;
}