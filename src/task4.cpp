#include<stdio.h>
#include<stdlib.h>
#include"task4.h"

void printLinesToFIle(const char*str[], int size, FILE*fp)
{
	for (int i = 0; i < size; i++)
		fprintf(fp, "\n%s", str[i]);
}
