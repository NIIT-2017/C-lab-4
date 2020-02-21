#include <string.h>

int isPalindrome(char* str)
{
	char* start = str;
	char* finish = &str[strlen(str) - 1];
	for (;start < finish; start++, finish--)
	{
		if (*start != *finish)
			return 0;
	}
	return 1;
}