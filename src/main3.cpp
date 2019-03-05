#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"
#define N 256


int main()
{
	printf("Please, enter any string to check it to be a palindrome or not:\n");
	char str[N] = { NULL };
	fgets(str, N, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	if (isPalindrome(str)== 0)
		printf("No, it isn't a palindrome!\a");
	else
		printf("Yes, your string is a palindrome!\a");
	return 0;

}