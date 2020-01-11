#include "task4.h"
#include <string.h>
#include <stdio.h>

#define MAX_ROW_SIZE 1024
#define MAX_ROWS 256

extern void lineSort(char* str[], int size);

int main()
{
	FILE* in, * out;

	in = fopen("task4.txt", "r");

	if (in == NULL)
	{
		puts("File open error!");
		return 1;
	}

	int count = 0;
	char buf[MAX_ROWS][MAX_ROW_SIZE];
	char* pstr[MAX_ROWS];

	while (fgets(buf[count], MAX_ROW_SIZE, in) != NULL)  
	{
		pstr[count] = buf[count];
		count++;
	}
	fclose(in);

	lineSort(pstr, count);
	out = fopen("task4.txt", "w");
	printLinesToFile((const char**)pstr, count, out);
	fclose(out);

	return 0;
}
