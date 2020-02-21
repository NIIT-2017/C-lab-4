#include <stdio.h>
#include <string.h>
#define SHIR 16
#define SIMVOL 256

int main()
{
	char ArrayOfNames[SHIR][SIMVOL] = { 0 };
	char namber[10][20] = { "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };
	char * young = NULL,
		 * old = NULL;
	int age = 0,
		minAge = 0,
		maxAge = 0,
		rodstvenniki = 0;
	printf("Enter rodstvenniki: ");
	scanf("%d", &rodstvenniki);
	for (int i=0; i < rodstvenniki; i++)
	{
		printf("\nEnter the name of the %s rodstvenniki: ", namber[i]);
		scanf("%s", ArrayOfNames[i]);
		printf("Enter his age:");
		scanf("%d", &age);
		if (age > maxAge)
		{
			maxAge = age;
			old = ArrayOfNames[i];
		}
		if (minAge == 0 && age != 0 || age < minAge)
		{
			minAge = age;
			young = ArrayOfNames[i];
		}
	}
	if (minAge == 0 && maxAge == 0)
		printf("\nYou didn't enter the correct age");
	else
		printf("\nThe oldest in your family is %s, and the youngest is %s!\n", old, young);
	return 0;
}