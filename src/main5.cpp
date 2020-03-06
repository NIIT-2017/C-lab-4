#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct family
{
	char name[20]; 
	int point; 
};

int main()
{
	struct family arr[15], * a;
	char* young = NULL;
	char* old = NULL;
	int i, n;
	int max = 0; 
	int min = 0; 
	printf("Enter the number of family members: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter the name of family member %dth : ", i + 1);
		scanf("%s", arr[i].name, &arr[i].point);
		printf("Enter Age: ");
		scanf("%d", &arr[i].point);
		if (i == 0)
		{
			young = arr[i].name;
			old = arr[i].name;
			min = arr[i].point;
			max = arr[i].point;
		}
	}
	max = arr[0].point;
	for (i = 1; i < n; i++) 
		if (arr[i].point > max)
		{
			max = arr[i].point;
			old = arr[i].name;
		}
	min = arr[0].point;
	for (i = 1; i < n; i++)
		if (arr[i].point < min)
		{
			min = arr[i].point;
			young = arr[i].name;
		}
	printf("the youngest relative is %s\n the oldest relative is %s\n", young, old);
	printf("%d and %d\n", min, max);
	return 0;
}