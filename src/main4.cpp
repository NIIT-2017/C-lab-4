#include <stdio.h>
#include "task4.h"
#include <string.h>
#define SHIR 16
#define SIMVOL 256

int main()
{
	FILE* fp;
	fp = fopen("text.txt", "r");
	char ArrayOfString[SHIR][SIMVOL] = { 0 };
	char* str[SHIR];
	int numStr = 0;
	for (; numStr < SHIR; numStr++)
	{
		fgets(ArrayOfString[numStr], SIMVOL, fp);
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