#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define M 24

int main()
{
	int N;
	printf("Enter the number of relatives: \n");
	scanf("%d", &N);

	char family[N][M];
	char * young;
	char * old;
	int minAge = 100, maxAge = 0, temp = 0;

	for (int i = 0; i < N; i++)
	{
		printf("Enter the name of the relative: \n");
		scanf("%s", family[i]);
		printf("Enter his age: \n");
		scanf("%d", &temp);

		if (temp > maxAge)
		{
			maxAge = temp;
			old = family[i];

		}
		if (temp < minAge)
		{
			minAge = temp;
			young = family[i];
		}
	}

	printf("Your youngest relative is %s and he is %d years old\n", young, minAge);
	printf("Your oldest relative is %s and he is %d years old\n", old, maxAge);

	return 0;
}