#include <stdio.h>
#include <string.h>
#include "task1.h"
#define N 256
#define M 512

int main()
{
	char strings[N][M];
	char *str[N];
	int count = 0;

	printf("Enter a strings (enter for exit): ");

	while (count < N && fgets(strings[count], M, stdin)!=NULL && strings[count][0] != '\n')
	{
		if (strings[count][strlen(strings[count]) - 1] == '\n')
			strings[count][strlen(strings[count]) - 1] = '\0';

		str[count] = strings[count];
		count++;		
	}
	lineSort(str, count);
	printLines(str, count);
	return 0;
}