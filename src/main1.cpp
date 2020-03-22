#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"


int main()
{
	char arr[SIZE][SIZE]={0};
	char* str[SIZE]={0};
	
	
	int i=0;
	
	while(i<SIZE&&*fgets(arr[i], SIZE, stdin)!='\n')
	{
		str[i]=&arr[i][0];
		i++;
	}	

	lineSort(str, i);
	printf ("otsortirovanniy massiv strok:\n");
	printLines((const char**)str, i);

	return 0;
}