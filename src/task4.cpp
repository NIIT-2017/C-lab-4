#include <string.h>
#include "task4.h"

void printLinesToFile(const char* str[], int size, FILE* fp)
{

	for (int i = 0; i < size; i++)
		for (int j = 0; j < strlen(str[i]); j++)
			putc(*(str[i] + j), fp);

}