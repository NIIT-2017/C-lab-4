#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <string.h>

char* reverseWords(char* in, char* out)
{
	char* s[SIZE] = { 0 };
	int inword = 0, i = 0, wordCount = 0;
	while (in[i])
	{
		if ((in[i] != ' ') && (inword == 0))
		{
			s[wordCount] = &in[i];
			inword = 1;
			wordCount++;
		}
		else if ((in[i] == ' ') && (inword == 1))
		{
			inword = 0;
		}
		i++;
	}

	int j = wordCount - 1;
	i = 0;
	for (int j = wordCount - 1; j >= 0; j--)
	{
		while (*s[j] != ' ' && *s[j] != '\0')
		{
			out[i] = *s[j];
			s[j]++;
			i++;
		}
		if (j != 0)
		{
			out[i] = ' ';
			i++;
		}
		else
		{
			out[i] = '\0';
		}
	}
	return out;
}