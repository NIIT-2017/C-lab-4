#include <stdio.h>
#include "task1.h"
#include <string.h>
#define SHIR 16
#define SIMVOL 256

int main()
{
	char ArrayOfString[SHIR][SIMVOL] = { 0 };
	char* str[SHIR];
	
	printf("Enter your lines:\n");
	int numStr = 0;
	for (; numStr < SHIR; numStr++)
	{
		fgets(ArrayOfString[numStr], SIMVOL, stdin);
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