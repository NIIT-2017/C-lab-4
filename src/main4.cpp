#include <stdio.h>
#include <string.h>
#include "task4.h"
int main()
{
	FILE* fp = fopen("C:\\labsss\\dano.txt", "r");
	char arrayOfStr[64][256];
	char* str[64];
	int size = 0;
	while (fgets(arrayOfStr[size], 256, fp) && size - 1 < 255)
	{
		str[size] = arrayOfStr[size];
		if (arrayOfStr[size] != '\0' && arrayOfStr[size][strlen(arrayOfStr[size]) - 1] == '\n')
			arrayOfStr[size][strlen(arrayOfStr[size]) - 1] = '\0';
		size++;
	}
	fclose(fp);
	lineSort(str, size);
	fp = fopen("C:\\labsss\\polucheno.txt", "w");
	printLinesToFile((const char**)str, size, fp);
	fclose(fp);
	printf("vualya\n");
	return 0;
}