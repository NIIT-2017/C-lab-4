#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<locale.h>
#include "task4.h"
#define N 20
#define M 255

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char arr[M];
	char** line = (char**)malloc(N * sizeof(char*));
	for (size_t i = 0; i < N; i++)
	{
		line[i] = (char*)malloc(M * sizeof(char));
	}
	int len[M] = { 0 };
	int i = 0;
	int j = 0;
	FILE* read = fopen("C:/Users/user/Desktop/лабораторные/lab4.4/file.txt", "r");
	for (j = 0; j < N; j++)
	{
		fgets(arr, M, read);
		if (arr[0] != '\n')
		{
			strcpy(line[j], arr);
		}
		else
			break;
	}
	lineSort(line, j);
	FILE* out = fopen("file2.txt", "w");
	printLinesToFile(line, j, out);
	return 0;
}
