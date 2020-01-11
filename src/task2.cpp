#include <stdio.h>
#include <string.h>
#include "task2.h"

char* reverseWords(char* in, char* out)
{
	int i = 0;
	int inWord = 0;
	char* pword[SIZE];
	int np = 0; 

	while (in[i])
	{
		if (in[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			pword[np] = in + i; 
			np++;
		}
		else if (in[i] == ' ' && inWord == 1)
			inWord = 0;
		i++;
	}
	
	pword[np] = in + strlen(in);
	np++;

	int j;
	int nout = 0;

	for (i = np-2; i >= 0; i--)
	{
		for (j = 0; j < pword[i + 1] - pword[i]; j++)
		{
			if (j == 0 && nout>0 && out[nout - 1] != ' ')
			{
				out[nout] = ' ';
				nout++;
			}
			out[nout] = *(pword[i] + j);
			nout++;
		}
	}
	out[nout] = '\0';

	return out;
}