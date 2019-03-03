#include <stdio.h>

void printLinesToFile(const char *str[], int size, FILE *fp) // taking A of Ps to lines, Ints and FILE IOT print
{
	for (int i = 0; i < size; i++)
	{
		fputs(str[i], fp);
	}
}