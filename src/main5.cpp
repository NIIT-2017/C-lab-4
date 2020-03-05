#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE1 10
#define SIZE2 256

int main()
{
	int number = 0;
	
	printf("Enter the number of relatives\n");
	scanf("%i", &number);

	char name[SIZE1][SIZE2] = { 0 };
	int age = 0, minAge = 150, maxAge = 0;
	char* young = 0 , * old = 0;
	
	for (int i = 0; i < number; i++)
	{
		printf("Enter the name and age of relative\n");
		scanf("%s %i",name[i], &age);
		if (age < minAge)
		{
			minAge = age;
			young = name[i];
		}
		if (age > maxAge)
		{
			maxAge = age;
			old = name[i];
		}

	}
	
	if (number == 0)
	{
		return 0;
	}
	else
	{
		printf("The youngest is - %s.\nThe oldest is - %s.", young, old);
	}

	return 0;
}