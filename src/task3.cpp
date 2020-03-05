#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

int isPalindrome(char * str)
{
	char *p;
	char *q;

	p = str;
	q = &str[strlen(str) - 1];

	while (*p==*q)
	{
		p++;
		q--;
		if (p >= q)
			return 1;
	}
	return 0;
} 
