#include <stdio.h>
#include <string.h>

void lineSort(char* str[], int size) //ôóíêöèÿ ñîðòèðóþùàÿ ìàññèâ óêàçàòåëåé
{
	int i = 0;
	int j = 0;
	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (strlen(str[i]) > strlen(str[j]))//öèêë ñîðòèðîâêè ñòðîê ïîë äëèííå
			{
				char* t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
		}
	}
}
void printLines(const char* str[], int size)
{
	for (int j = 0; j < size; j++)
		printf("%s\n", str[j]);
}
