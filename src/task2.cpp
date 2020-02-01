//Clab4 task2

#include "task2.h"

char* reverseWords(char* in, char* out)
{
	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';

	char* p[SIZE];
	int i = 0, length = 0, inWord = 0;

	for (; i < SIZE; i++)
	{
		if (in[i] != ' ' && inWord == 0)
		{
			p[length] = &in[i];
			inWord = 1;
			length++;
		}

		else if (in[i] == ' ' && inWord == 1)
		{
			inWord = 0;
		}

		else if (in[i] == '\0')
			break;
	}

	length--;

	int j = length;
	int m = 0;

	for (; j >= 0; j--)
	{
		for (int k = 0; *(p[j]+k) != ' ' && *(p[j] + k) != '\0'; k++)
		{			
			out[m] = *(p[j]+k);		
			m++;
		}

		out[m] = ' ';
		m++;			
	}

	out[m] = '\0';

	if (out[m - 1] == ' ')
		out[m - 1] = '\0';

	return out;
}

