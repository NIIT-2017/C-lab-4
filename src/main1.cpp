#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	char str[256][256];
	char* p[256];
	int count = 0;


	while (count < 256 && *fgets(str[count], 256, stdin) != '\n')
	{
		p[count] = str[count];
		count++;
	}

	lineSort(p, count);
	printLines((const char**)p, count);

	return 0;
}