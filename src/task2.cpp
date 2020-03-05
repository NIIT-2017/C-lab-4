#include <stdio.h>
#include <string.h>

char * reverseWords(char * in, char *out)

{

char *word[10]; 

int q, t = 0, i, j = 0, k = 0, inWord = 0, len = 0;
len = strlen(in);

for (i = 0; i < len; i++)
{
	if (in[i] != ' '&& inWord == 0)
	{
		*(word + k) = &in[i];
		k++;
		inWord = 1;
	}
	else if (in[i] == ' '&& inWord == 1)
		inWord = 0;
}

for (q = k - 1; q >= 0; q--)
{
	len = strlen(*(word + q));

	for (j, t = 0; j < len; j++, t++)
	{
		if (*(*(word + q) + t) != ' '&&*(*(word + q) + t) != '\0')
			out[j] = *(*(word + q) + t);
	}
	out[j] = ' ';
		j++;
}

out[j-1]='\0';
return out;

}