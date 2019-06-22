//#include "pch.h"
#include <stdio.h>
#include <string.h>
#include "task2.h"

#define N 128

int main()
{
	char in[N] = { 0 }, out[N] = { 0 };
	printf("Enter a string: \n");
	fgets(in, N, stdin);
	puts(reverseWords(in, out));
	
	return 0;
}