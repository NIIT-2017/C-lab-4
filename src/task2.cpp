#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256

char* reverseWords(char* in, char* out)
{
	char* arr[SIZE];
	int i = 0; //счётчик символов в массиве
	int j = 0;
	char *S;
	int inWord = 0; //пробол - не пробел
	char *element = out;

	while (*in)
	{
		if (*in != ' ' && inWord == 0) //если нашли словов
		{
			arr[i] = in; //запись первого символа в массиве указателя
			i++;
			inWord = 1;
		}
		else if (*in == ' ' && inWord == 1) //если словов закончилось
		{
			inWord = 0;			
		}
        in++; //переход к следующему элементу в массиве указателя
	}
	for (j = i - 1; j >= 0; j--) //читка строки от начало до конца
	{
		S = arr[j];
		while (*S != ' ' && *S != '\0')
		{
			*out = *S;
			S++;
			out++;
		}
		*out = ' ';
		out++;
	}	
	out--;
	*out = 0;
	return element;
}