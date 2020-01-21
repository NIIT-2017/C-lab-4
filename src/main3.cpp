#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task3.h"

int main(void)
{
	char line[SIZE];
	int result;

	puts("Enter a line:");
	fgets(line, SIZE, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	result = isPalindrome(line);
	if (result == 0)
		puts("Our line is Palindrome!");
	else if (result == 1)
		puts("Our line isn't Palindrome!");

	return 0;
}