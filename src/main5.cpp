#include <stdio.h>
int main()
{
	char* young = NULL;
	char* old = NULL;
	int age;
	int minAge, maxAge = 0;
	char family[128][16];
	int numbersOfRelatives = 0;
	printf("Enter number of relatives\n");
	scanf("%i", &numbersOfRelatives);
	if (numbersOfRelatives == 0)
	{
		printf("eh, sirota moya\n");
		return 0;
	}
	for (int i = 0; i < numbersOfRelatives; i++)
	{
		printf("Enter the name of the %i relative\n", i + 1);
		scanf("%s", family[i], &age);
		printf("Enter age\n");
		scanf("%i", &age);
		if (i == 0)
		{
			young = family[i];
			old = family[i];
			minAge = age;
			maxAge = age;
		}
		if (age < minAge)
		{
			minAge = age;
			young = family[i];
		}
		else if (age > maxAge)
		{
			maxAge = age;
			old = family[i];
		}
	}
	printf("The youngest relative is %s\nThe oldest relative is %s\n", young, old);
	return 0;
}