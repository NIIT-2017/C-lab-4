#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lineSort(char* buf[], int size)
{
	char *a;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (strlen(buf[i]) > strlen(buf[j]))
			{
				a = buf[i];
				buf[i] = buf[j];
				buf[j] = a;
			}
		}
	}


}
void printLines(const char* buf[], int size)
{
	for (int i = 0; i < size; i++)
		puts(buf[i]);

}