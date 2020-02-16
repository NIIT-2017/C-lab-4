#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME 20
#define NUMBER 200
int main()
{
	int number = 0;
	char arr[NUMBER][NAME] = { { 0 } };
	int currentAge = 0, maxAge = 0, minAge = 150;
	char* young = NULL;
	char* old = NULL;
	printf("What is a number of your relatives?\n");
	scanf("%d", &number);
	int i = 0;
	while (i < number)
	{
		printf("Enter relative's name and age (Ann 15)\n");
		scanf("%s %d", arr[i], &currentAge);

		if (currentAge > maxAge)
		{
			maxAge = currentAge;
			old = arr[i];
		}

		if (currentAge < minAge)
		{
			minAge = currentAge;
			young = arr[i];
		}
		i++;
	}
	printf("%s is the youngest relative\n", young);
	printf("%s is the oldest relative\n", old);
	return 0;
}