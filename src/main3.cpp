#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 64
int main()
{
	char line[SIZE];
	int result;
	printf("Enter a line:\n");
	fgets(line, SIZE, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	result = isPalindrome(line);
	if (result == 1)
		printf("This line is palindrome!\n");
	else if (result == 0)
		printf("This line is not palindrome!\n");
	return 0;
}