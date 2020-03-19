#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale>
#include "task1.h"
#define N 20
#define M 255

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char arr[M];
	  char** line = (char**)malloc(N * sizeof(char*));
	for (size_t i = 0; i < N; i++)
	{
		line[i] = (char*)malloc(M*sizeof(char));
	}
	int len[M] = { 0 };
	int i = 0;
	int j = 0;
	printf("Ведите  строку \n");
	for (j = 0; j < N;j++)
	{	
		fgets(arr, M, stdin);
		if (arr[0] != '\n')
		{
			strcpy(line[j],arr);			
		}
		else
			break;
	}
	lineSort(line, j);
	
	printLines(line, j);
	return 0;
}
