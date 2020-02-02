#include <stdio.h>
#include <string.h>
#define STRING 16
#define SYMBOLS 256

int main()
{
	char ArrayOfNames[STRING][SYMBOLS] = { 0 };
	char namber[10][20] = { "first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth" };

	char * young = NULL,
		 * old = NULL;

	int age = 0,
		minAge = 0,
		maxAge = 0,
		relatives = 0;

	printf("Enter the number of relatives: ");
	scanf("%d", &relatives);
	
	for (int i=0; i < relatives; i++)
	{
		printf("\nEnter the name of the %s relative: ", namber[i]);
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