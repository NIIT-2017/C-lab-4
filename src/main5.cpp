#include <stdio.h>
#define SIZE 256
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num=0;
	printf("vvedite kolichestvo rodstvennikov:");
	scanf("%d", &num);
	char name[SIZE][SIZE]={'0'};
	char *young;
	char *old;
	int age=0;
	int max=0;
	int min=150;

	for (int i=0; i<num;i++)
	{
		printf("\nvvedite imya rodstvennika:");
		scanf("%s", name[i]);
		printf("\nvvedite vozrast:", i + 1);
        scanf("%d", &age);
		if (age < min)
        {
            min = age;
            young = &name[i][0];
        }
        if (age > max)
        {
            max = age;
            old = &name[i][0];
        }

	}
	printf("samyi starshyi rodstvennik - %s, vozrast %d\n", old, max);
    printf("samyi mladshyi rodstvennik - %s, vozrast %d\n", young, min);

	return 0;
}