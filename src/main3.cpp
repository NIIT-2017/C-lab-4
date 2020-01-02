#include "task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
	char str[256] = { 0 };
	int result = 0;
	printf("Please enter string\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	result = isPalindrome(str);
	if (result == 1)
		printf("This string is palindrom");
	else
		printf("This string is not palindrome");
	return 0;
}
