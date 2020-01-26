//Clab4 task 3

#include "task3.h"

int main()
{
	char str[SIZE];

	puts("Enter a line and I will determine is it a Palindrome!");
	fgets(str, SIZE, stdin);

	if (isPalindrome(str) == 1)
		puts("Phrase is a Palindrome!");

	else 
		puts("Phrase is not a Palindrome!");

	return 0;
}