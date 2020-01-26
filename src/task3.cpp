//Clab4 task 3

#include "task3.h"

int isPalindrome(char* str)
{
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	int i = 0, j = strlen(str)-1;

	char* left = str + i;
	char* right = str + j;
	
	while (left < right)
	{
		if (*left != *right)
			return 0;

		left++;
		right--;
	}

	return 1;
}