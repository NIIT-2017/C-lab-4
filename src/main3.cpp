#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale>
#include "task3.h"


int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	char str[255];
	
	printf("Ведите  строку \n");
	fgets(str, 255, stdin);
	
	if(isPalindrome(str) ==0)
		puts("палиндром");
	return 0;
}