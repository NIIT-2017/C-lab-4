#include <stdio.h>
#include <string.h>
#define SIZE 256

int isPalindrome(char* str)
{
	int i = 0;
	int j = 0;
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0'; 
	char* strend = str; 
	j = strlen(str) - 1;
	while (str[i])
	{
		if (str[i] == strend[j])
		{
			i++;
			j--;
		}
		else
			return 0;
	}
	return 1;
}