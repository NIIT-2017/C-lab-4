//#include "pch.h"
#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
	char str[N];
	printf("Enter a string: ");
	fgets(str, N, stdin);

	if (isPalindrome(str) == 0)
		printf("String is not polindrome\n");
	else
		printf("String is polindrome\n");

	return 0;
}