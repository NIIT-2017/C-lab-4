#include "pch.h"
#include <stdio.h>
#include "task1.h"
#include "task4.h"
#define N 10
#define M 64


int main()
{
	FILE *fp;
	char str[N][M];
	char *p[N];
	int count = 0;
	while (count < N && *fgets(str[count], M, stdin) != '\n')
	{
		p[count] = str[count];
		count++;
	}
	fp = fopen("lab4.txt", "a+");
	lineSort(p, count);
	printLinesToFile(p, count, fp);

	return 0;
}