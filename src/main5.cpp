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
	printf("������� � ��� ������������� ?\n");
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		printf("������� ��� \n");
		scanf("%s", arr[i]); 
		printf("������� ������� \n");
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
	printf("%s ����� ������� \n", young);
	printf("%s ����� ������ \n", old);
	return 0;
}