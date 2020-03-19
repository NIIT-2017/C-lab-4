#include "task2.h"

char* reverseWords(char* in, char* out)
{
	char* arr[20];
	int ind = 0;
	int i = 0;
	arr[ind++] = &in[0];
	while (in[i] != '\0')
	{
		if (in[i] == ' ')
		{
			arr[ind++] = &in[i + 1];
		}
		i++;
	}
	int outInd = 0;
	for  (i = ind-1; i >=0; i--)
	{
		int j = 0;
		while((arr[i][j] !=' ') && (arr[i][j]!='\n'))
		{
			out[outInd++] = arr[i][j++];
		}
		out[outInd++] = ' ';
	}
	out[outInd - 1] = '\0';
	return out;
}