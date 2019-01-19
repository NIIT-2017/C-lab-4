#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
	char str[N] = { 0 };

	printf("Enter a string: ");
	fgets(str, N, stdin);

	if (isPalindrome(str) == 1)
		printf("String is palindrome!");
	else
		printf("String isn't palindrome!");

	return 0;
}