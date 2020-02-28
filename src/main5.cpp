#include <stdio.h>
#include <string.h>

#define buf 32
#define buf_one 256

int main()
{
   	char arr_names[buf][buf_one];
	int age = 0;
   	int Age_min = 150;
    	int Age_max = 0;
	char *young = 0;
	char *old = 0;
	int num = 0, i;


	printf("How many? input number: \n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Input name and age: \n");
		scanf("%s %d",arr_names[i], &age);

		if (age < Age_min)
		{
			Age_min = age;
			young = arr_names[i];
		}
		if (age >Age_max)
		{
			Age_max = age;
			old = arr_names[i];
		}

	}

	if (num == 0)
	{
		return 1;
	}
	else
	{
		printf("The youngest = %s.\n The oldest = %s.", young, old);
	}

	return 0;
}
