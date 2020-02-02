#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char str[256];

	printf("Enter your line: ");

	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	if (isPalindrome(str))
		printf("This string is a palindrome!\n");
	else
		printf("This string is not a palindrome!\n");
	
	return 0;
}