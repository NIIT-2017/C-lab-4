#include "task3.h"
#include  <string.h>
#include <stdio.h>

int isPalindrome(char* str)
{
	char out[255];
	char* arr[20];
	int ind = 0;
	int i = 0;
	arr[ind++] = &str[0];
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			arr[ind++] = &str[i + 1];
		}
		i++;
	}
	str[i - 1] = '\0';
	int outInd = 0;
	for (i = ind - 1; i >= 0; i--)
	{
		int j = 0;
		while ((arr[i][j] != ' ') && (arr[i][j] != '\0'))
		{
			out[outInd++] = arr[i][j++];
		}
		out[outInd++] = ' ';
	}
	out[outInd-1] = '\0';
	puts(str);
	puts(out);
	
	return strcmp(str, out);
}