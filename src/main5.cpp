#include <stdio.h>

#define M 100
#define N 10

int main()

{
	char *young;
	char *old;

	char names[N][M] = { 0 };
	int n = 0, countRelatives = 0, age = 0, maxYears = 0, minYears = 0;

	printf("Vvedite kolichestvo lydei v semie:\n");
	scanf("%d", &countRelatives);

	for (n; n < countRelatives; n++)
	{
		printf("Vvedite imya:");
		scanf("%s", names[n]);

		printf("Vvedite vozrast:");
		scanf("%d", &age);
		
		
		if (age < minYears)
		{
			minYears = age;
			young = &names[n][0];
		}
		if (age > maxYears)
		{
			maxYears = age; 
			old = &names[n][0];
		}
	}
		printf("Stareishina: %s  %d years\nZelen: %s  %d years", old, maxYears, young, minYears);

		return 0;
}