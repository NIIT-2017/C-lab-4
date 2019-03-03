#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 256
#define M 256

int main()
{
	char NamesOfRelatives[N][M] = { NULL };
	int cAge = 0, maxAge = 0, minAge = 150, NumOfRel = 0;
	char *p_young = NULL;
	char *p_old = NULL;


	printf("How many relatives have you got?\t");
	scanf("%d", &NumOfRel);
	for (int i = 0; i < NumOfRel; i++)
	{
		printf("Relative Number %d. What's his name?\t", i + 1);
		scanf("%s", &NamesOfRelatives[i]);
		printf("How old is he or she?\t");
		scanf("%d", &cAge);
		putchar('\n');
		if (cAge > maxAge)
		{
			maxAge = cAge;
			p_old = NamesOfRelatives[i];
		}
		if (cAge < minAge)
		{
			minAge = cAge;
			p_young = NamesOfRelatives[i];
		}
	}
	printf("The youngest relative of yours is %s, who's %d years old.\n",p_young, minAge);
	printf("The oldest relative of yours is %s, who's %d years old.\n\a",p_old, maxAge );
	
	return 0;
}