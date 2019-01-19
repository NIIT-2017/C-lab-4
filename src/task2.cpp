#include <string.h>
#define N 256

char *reverseWords(char *in, char *out)
{
	int i = 0, j = 0, count = 0, state = 0;
	char *ptr[N];
	int buf[] = { 0 };

	if (in[strlen(in) - 1] == '\n')
		in[strlen(in) - 1] = '\0';

	while (in[i])
	{
		if (in[i] != ' ' && state == 0)
		{
			state = 1;
			ptr[count] = &in[i];
			count++;
		}
		else if (in[i] == ' ' && state == 1)
			state = 0;
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		while(*ptr[i]!=' ' && *ptr[i])
			out[j++] = *ptr[i]++;
		out[j++] = ' ';
	}
	return out;
}