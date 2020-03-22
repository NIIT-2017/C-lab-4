#include "task4.h"
#include <string.h>



void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i;
	for (i = 0; i < size; i++)
		fputs(str[i], fp);
}