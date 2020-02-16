#include <stdio.h>
#include <string.h>
#include "task2.h"

char * reverseWords(char * in, char * out)
{
	char * buf[SIZE] = { 0 };
	int inWord = 0;
	int i = 0, j = 0;
	
	while (in[i])
	{
		if ((in[i] != ' ') && (inWord == 0))
		{/*начало слова*/
			buf[j] = &in[i];
			inWord = 1;
			j++;
		}
		/*else if ((*in != ' ') && (inWord == 1))
		{/*в слове*/
			/*i++;
            inWord = 0;
		}*/
		else if ((in[i] == ' ') && (inWord == 1))
		{/*конец слова*/
			inWord = 0;	
		}
		i++;
	}
	i = 0;
	j--;
	while (j >= 0)
	{
		while (*buf[j] != '\0' && *buf[j] != ' ')
		{
			out[i] = *buf[j];
			buf[j]++;
			i++;
		}
		out[i] = ' ';
		i++;
		j--;
	}
	out[i - 1] = '\0';
	return out;
}