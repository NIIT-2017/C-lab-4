#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"
#define N 256

int main()
{
	char str[N];

	printf("Enter a string and I will check it for palindrome:\n");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str) == 1)
		printf("It is a PALINDROME!!!!\n");
	else
		printf("It's NOT a palindrome!\n");

	return 0;
} 
