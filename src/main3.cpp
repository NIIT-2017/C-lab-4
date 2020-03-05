#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };

	printf("enter the string\n");
	fgets(line, SIZE, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int flag = isPalindrome(line);
	if (flag == 1)
		printf("This line is palindrome!\n");
	else if (flag == 0)
		printf("This line is not palindrome!\n");

	return 0;
}