#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 512

char * reverseWords(char * in, char *out)
{
	char * p_fC[N] = { NULL };
	int flag = 0; // 0 - ausserhalb, 1 - innerhalb;
	int countWs = 0;
	int j = 0, k = 0; // j-in-Messer, k-out-Messer
	while (in[j] != '\0')
	{
		if (in[j] != ' ' && flag == 0)
		{
			p_fC[countWs] = &in[j];
			flag = 1;
			countWs++;
		}
		if (in [j] == ' ')
		{
			flag = 0;
		}
		j++;

	}
	countWs--;
	while (countWs >= 0)
	{
		while (*p_fC[countWs] && *p_fC[countWs]!= ' ')
		{
			out[k] = *p_fC[countWs];
			k++;
			*p_fC[countWs]++;
		}
		out[k] = ' ';
		k++;
		countWs--;

	}
	out[strlen(in)] = '\0';
	return out;
}