#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256
#define inWord 1
#define outWord 0

char * reverseWords(char * in, char *out)
{
	char *p[N] = { 0 };

	int i = 0, j=0;
	int flag = outWord;

	//put the first letter adress of each word to '*p':
	while (i < strlen(in))
	{
		if (in[i] != ' ' && flag == outWord)
		{
			p[j] = &in[i];
			i++;
			j++;
			flag = inWord;
		}
		else if (in[i] == ' ' && flag == inWord)
		{
			flag = outWord;
			i++;
		}
		else
			i++;
	}

	//reverse words in string and save it to 'out':
	i = 0;
	j--;
	while (j >= 0)
	{
		while (*p[j] && *p[j] != ' ')
		{
			out[i] = *p[j];
			i++;
			*p[j]++;
		}
		out[i] = ' ';
		i++;
		j--;
	}
	out[i-1] = '\0';

	return out;

} 
