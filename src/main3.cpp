#include "task3.h"
#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	char str[SIZE] = { 0 };
	int n = 0;
	printf("Entered string: \n");
	fgets(str, SIZE, stdin);
	if (isPalindrome(str) == 1)
		printf("This word is palindrome\n");
	else 
		printf("This word is not a palindrome\n");
	return 0;
}