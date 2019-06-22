//#include "pch.h"
#include <stdio.h>
#include "task1.h"
#define N 10
#define M 64


int main()
{
	char str[N][M];
	char *p[N];
	int count = 0;
	printf("Enter no more than %d lines to sort: \n", N);
	while (count < N && *fgets(str[count], M, stdin) != '\n')
	{
		p[count] = str[count];
		count++;
	}
	lineSort(p, count);
	puts("\n Sorted lines: \n");
	printLines(p, count);

	return 0;
}