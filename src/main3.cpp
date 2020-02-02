#include <stdio.h>
#include <string.h>
#include "task3.h"

void removeSeparators(char* line);
void finishLine(char* line);

int main()
{
	char str[256];
	printf("Enter a line:\n");
	fgets(str, 256, stdin);

	finishLine(str);
	removeSeparators(str);

	if (isPalindrome(str))
		printf("The string is a palindrome!\n");
	else
		printf("The string is not a palindrome!\n");

	return 0;
}

void finishLine(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

void removeSeparators(char* line)
{
	char separators[] = " .,?!\0";
	int i = 0;
	int sline = strlen(line);
	int ssepar = strlen(separators);

	while(line[i])
	{
		short temp = 0;
		int j = 0;
		while ((temp == 0) && (j < ssepar))
		{
			if (line[i] == separators[j])
				temp = 1;
			j++;
		}

		if (temp)
		{
			for (j = i; j < sline; j++)
				line[j] = line[j + 1];
		}
		else
			i++;
	}
}