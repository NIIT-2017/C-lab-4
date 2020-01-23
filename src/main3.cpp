#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"task3.h"

int main(void)
{
	char line[SIZE];
	char punctuation[]=",.!?";
	int result;

	puts("Enter a line:");
	fgets(line, SIZE, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	
	for (int i=0;i<strlen(line);i++)   //to replace punctuation with ' '
		for(int j=0;j<strlen(punctuation);j++)
		{
			if(line[i]==punctuation[j])
			{
				line[i]=' ';
				continue;
			}
		}

	result = isPalindrome(line);
	if (result == 1)
		puts("Our line is Palindrome!");
	else if (result == 0)
		puts("Our line isn't Palindrome!");

	return 0;
}
