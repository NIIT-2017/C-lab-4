//Clab4 task 5

/*Ќаписать программу, котора€ запрашивает количество родственников в семье, а потом позвол€ет ввести им€ родственника и его возраст.
ѕрограмма должна определить самого молодого и самого старого родственника и вывести их имена*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

void clean_stdin(void)
{
	int c;
	do 
	{
		c = getchar();
	} 

	while (c != '\n' && c != EOF);
}

int main()
{
	int i = 0, numbers = 0, age = 0, max_age = 0, min_age = 99999;
	char names[SIZE][SIZE];
	char* young;
	char* old;

	puts("Enter numbers of relatives.");
	scanf("%d", &numbers);
	clean_stdin();
	
	for (; i < numbers; i++)
	{
		puts("Enter name of relative");

		fgets(names[i], SIZE, stdin);

		puts("Enter his/her age");
		scanf("%d", &age);
		clean_stdin();

		if (age >= max_age)
		{
			max_age = age;
			old = names[i];
		}

		if (age < min_age)
		{
			min_age = age;
			young = names[i];
		}
	}
	
	printf("The youngest is - %s.\nThe oldest is - %s.", young, old);

	return 0;
}