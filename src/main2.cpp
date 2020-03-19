#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale>
#include "task2.h"
#define N 20
#define M 255

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char arr[M];
	char line[255];
	
	int len[M] = { 0 };
	int i = 0;
	int j = 0;
	printf("Ведите  строку \n");
	fgets(line, 255, stdin);
	char out[255];
	reverseWords(line, out);
	puts(out);
	return 0;
}
