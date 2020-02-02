#include<stdio.h>
#include<string.h>
#include"task3.h"

int isPalindrome(char* str)
{
	char* start = str;  //this is an address of the first simbul of our line
	char* end = &str[strlen(str) - 1]; //this is an address of the last simbul of our line

	while (start <= end) //check our line(movement towards 
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

	if (start < end) //meet simbols != (break while)
		return 0;

	else // start == end
		return 1;
}
