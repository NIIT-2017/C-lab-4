#include <stdio.h>
#include "task1.h"
#include <string.h>
#define lineSIZE 256
#define lineNUMBER 24

int main()
{
	char eStr[lineNUMBER][lineSIZE] = { 0 };
	char *p_eStr[lineNUMBER] = { NULL }; // Array von Zeigern auf char-Typ; NULL ist der nullte Zeiger
	int countLine = 0;
	printf("Please, enter any strings to sort them from bigger to smaller ones. To start sorting type ENTER twice\n");
	while (countLine < lineNUMBER && *fgets(eStr[countLine], lineSIZE, stdin) != '\n') // sollte UEBER den ZEIGER \n da sein.
	{
		p_eStr[countLine] = eStr[countLine]; // Warum ohne POINTER? Da es in C keine Zeilenvariablen gibt, wird der Zgr auf Zl vermittelt
		countLine++;
	}
	lineSort(p_eStr, countLine);
	printLines((const char**)p_eStr, countLine);
	putchar('\n');
	return 0;
}