#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define NAME 20
#define NUMBER 20
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int n = 0;
	char arr[NUMBER][NAME] = { { 0 } };
	int Age = 0, max = 0, min = 100;
	char* young = NULL;
	char* old = NULL;
	printf("—колько у ¬ас родственников ?\n");
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		printf("¬ведите им€ \n");
		scanf("%s", arr[i]); 
		printf("¬ведите возраст \n");
		scanf("%d", &Age);

		if (Age > max)
		{
			max = Age;
			old = arr[i];
		}

		if (Age < min)
		{
			min = Age;
			young = arr[i];
		}
		i++;
	}
	printf("%s самый молодой \n", young);
	printf("%s самый старый \n", old);
	return 0;
}