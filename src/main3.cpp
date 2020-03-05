#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
	char str[256];
	printf("Enter your word: ");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	if (isPalindrome(str))
		printf("Palindrome!\n");
	else
		printf("Not a palindrome!\n");
	return 0;
}