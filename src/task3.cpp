//#include "pch.h"
#include <string.h>

int isPalindrome(char * str)
{
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = 0;

	int len = strlen(str);
	for (int i = 0; i < len / 2; ++i)
	{
		if (str[i] != str[len - i - 1])
			return 0;
	}

	return 1;
}