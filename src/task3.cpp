#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
#include <string.h>

#define SIZE 256

int isPalindrome(char* str)
{
	int i = 0, j = strlen(str) - 1;

	char* left = str + i;
	char* right = str + j;

	while (left < right)
	{
		if (*left != *right)
			return 0;

		left++;
		right--;
	}

	return 1;
}