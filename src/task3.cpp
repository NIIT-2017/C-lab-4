#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 64
int isPalindrome(char* str)
{
	char* start = str;  //adr first symbol
	char* end = &str[strlen(str) - 1]; //adr last symbol
	while (start <= end)
	{
		if ((*start != ' ' && *end != ' ' && *start == *end) || *start == ' ' && *end == ' ')
		{
			start++;
			end--;
		}
		else if (*start == ' ' && *end != ' ')
			start++;
		else if (*start != ' ' && *end == ' ')
			end--;
		else if (*start != ' ' && *end != ' ' && *start != *end)
			break;
	}
	if (start < end)
		return 0;
	else
		return 1;
}