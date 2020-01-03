#include <stdio.h>
#include "task1.h"
#include <string.h>
#define STRING 16
#define SYMBOLS 256

int main()
{
	char ArrayOfString[STRING][SYMBOLS] = { 0 };
	char* str[STRING];
	
	printf("Enter your lines:\n");
	int numStr = 0;
	for (; numStr < STRING; numStr++)
	{
		fgets(ArrayOfString[numStr], SYMBOLS, stdin);
		str[numStr] = ArrayOfString[numStr];
		if (ArrayOfString[numStr][strlen(ArrayOfString[numStr]) - 1] == '\n')
			ArrayOfString[numStr][strlen(ArrayOfString[numStr]) - 1] = '\0';
		if (!strlen(ArrayOfString[numStr]))
			break;
	}
	
	numStr--;
	
	lineSort(str, numStr);
	printLines((const char**) str, numStr);
	
	return 0;
} 