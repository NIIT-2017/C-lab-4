#include <stdio.h>
#include "task1.h"

#define N 10
#define M 256

int main()

{
	char buf[N][M];
	char *str[N];

	int count = 0;
	puts("Vvedite stroku:");
	while (count < N && *fgets(buf[count], M, stdin) != '\n')
	{
		str[count] = buf[count];
		count++;
	}
	lineSort(str, count);
	printLines((const char**)str, count);
