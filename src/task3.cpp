#include <stdio.h>
#include <string.h>
#include "task3.h"


int isPalindrome(char* str)
{
	int i;
	int isPalindrome = 1;
	char* strend = str+strlen(str);
	for (i = 0; i < strlen(str) / 2; i++)
	{
		if (*(str + i) != *(strend - i - 1))
			isPalindrome = 0;
	}
	return isPalindrome;
}

