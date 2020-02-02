#include <stdio.h>
#include "task4.h"
#include <string.h>
#define STRING 16
#define SYMBOLS 256

int main()
{
	FILE* fp;
	fp = fopen("text.txt", "r");

	char ArrayOfString[STRING][SYMBOLS] = { 0 };
	char* str[STRING];

	int numStr = 0;
	for (; numStr < STRING; numStr++)
	{
		fgets(ArrayOfString[numStr], SYMBOLS, fp);
		str[numStr] = ArrayOfString[numStr];
		if (ArrayOfString[numStr][strlen(ArrayOfString[numStr]) - 1] == '\n')
			ArrayOfString[numStr][strlen(ArrayOfString[numStr]) - 1] = '\0';
		if (!strlen(ArrayOfString[numStr]))
			break;
	}
	numStr--;
	fclose(fp);
	fp = fopen("text.txt", "w");
	lineSort(str, numStr);
	printLinesToFile((const char**)str, numStr,fp);
	fclose(fp);
	return 0;
}