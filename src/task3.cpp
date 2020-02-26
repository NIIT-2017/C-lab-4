#include <stdio.h>
#include <string.h>
#include "task3.h"

int isPalindrome(char* str)
{
	int i = 0;
	int j = strlen(str) - 1;
	char* start = str + i;
	char* end = str + j;
		
	while (start < end)
	{
		if (*start != *end)
			return 0;

		start++;
		end--;
	}

	return 1;
}