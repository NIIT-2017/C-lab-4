#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define SIZE 50

int main()
{
	int relatives;
	char name[SIZE][SIZE] = { 0 };
	char* young = { 0 };
	char* old = { 0 };
	int age;
	int age_min = 0;
	int age_max = 0;

	puts("How many relatives do you have in your family?");
	scanf("%d", &relatives);

	for (int i = 0; i < relatives; i++)
	{
		puts("Enter  relative's name and his/her age (\"name age\"):");
		scanf("%s %d", name[i], &age);
		name[i][strlen(name[i])] = '\0'; //cut off trash

		if ((age_min == 0 && age_max == 0) || (age > age_max  && age_min != 0))
		{
			age_max = age;
			old = name[i];
		}

		else if (age > age_max && age_min == 0)
		{
			age_min = age_max;
			young = old;
			age_max = age;
			old = name[i];
		}

		else if (age < age_max && (age_min == 0 || age < age_min))
		{
			age_min = age;
			young = name[i];
		}
	}

	printf("The youngest relative is ");
	for (int i = 0; *(young + i) != '\0'; i++)
		printf("%c", *(young + i));
	printf(" because age=%d.\n", age_min);

	printf("The eldest relative is ");
	for (int j = 0; *(old + j) != '\0'; j++)
		printf("%c", *(old + j));
	printf(" because age=%d.\n", age_max);

	return 0;
}