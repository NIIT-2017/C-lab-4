#include <stdio.h>

int main()
{
	int rows;
	char relatives[256][256];
	char *p[256];
	int age;
	int maxAge = 0;
	int minAge = 999;
	char *young;
	char *old;

	puts("How many relatives do you have?");
	scanf("%d", &rows);

	puts("\nEnter name and age of each your relative:");
	for (int i = 0; i < rows; i++)
	{

		printf("\nName of your %d relative: ", i + 1);
		scanf("%s", relatives[i]);
		p[i] = relatives[i];

		printf("\nAge of your %d relative: ", i + 1);
		scanf("%d", &age);
		if (age > maxAge)
		{
			maxAge = age;
			old = p[i];
		}
		if (age < minAge)
		{
			minAge = age;
			young = p[i];
		}
	}

	printf("\nYour oldest relative is %s and he/she is %d", old, maxAge);
	printf("\nYour youngest relative is %s and he/she is %d\n", young, minAge);

	return 0;
}
