#include <stdio.h>
#define N 256
#define M 512

int main()
{
	int age = 0, maxAge = 0, minAge = 150;
	int i = 0, number = 0;
	char name[N][M] = { 0 };
	char *young;
	char *old;
	
	printf("Enter the number of relatives: ");
	scanf("%d", &number);

	while (i<number)
	{
		printf("Enter the name: ");
		scanf("%s",name[i]);
		printf("Enter the age: ");
		scanf("%d", &age);

		if (maxAge < age)
		{
			maxAge = age;
			old = &name[i][0];
		}
		else if (minAge > age)
		{
			minAge = age;
			young = &name[i][0];
		}
		i++;
	}
	printf("Younger relative is %s.\n", young);
	printf("Older relative is %s.\n", old);
	return 0;
}