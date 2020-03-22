#include "task4.h"
#include <string.h>

/*void lineSort(char *str[],int size)
{
	
	for (int i=0; i<size-1; i++)
		for (int j=(size-1); j>i; j--)
		{
			if (strlen(str[j-1])>strlen(str[j]))
			{
				char *buf=str[j-1];
				str[j-1]=str[j];
				str[j]=buf;
			}

		}
}
*/

void printLinesToFile(const char *str[], int size, FILE *fp)
{
	int i;
	for (i = 0; i < size; i++)
		fputs(str[i], fp);
}