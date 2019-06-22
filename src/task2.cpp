//#include "pch.h"
#include <string.h>
#define N 128

char * reverseWords(char * in, char *out)
{
	char *token[N];
	int i = 0, j = 0, count = 0;
	int state = 0;

	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = 0;

	for (i = 0; in[i]; i++)
	{
		if (in[i] != ' ' && state == 0)
		{
			token[count] = &in[i];
			state = 1;
			count++;
		}
		else if (in[i] == ' ' && state == 1)
			state = 0;
	}
	for (i = count - 1; i >= 0; i--)
	{
		while (*token[i] != ' ' && *token[i] != '\0')
		{
			out[j++] = *token[i];
			token[i]++;
		}
		out[j++] = ' ';
	}
	out[strlen(in)] = '\0';

	return out;
}