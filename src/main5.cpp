#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>

struct family//структура с входными параметрами членов семьи
{
	char lname[20]; //массив для имени
	int point; //возраст члена семьи
};

int main()
{
	struct family arr[15], * a;
	char* baby = NULL;
	char* star = NULL;
	int i, n;
	int max = 0; //максимальный возраст
	int min = 0; //минимальный возраст
	printf("Enter the number of family members: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter the first name of family member %dth : ", i + 1);
		scanf("%s", arr[i].lname, &arr[i].point);
		printf("Enter Age: ");
		scanf("%d", &arr[i].point);
		if (i == 0)
		{
			baby = arr[i].lname;
			star = arr[i].lname;
			min = arr[i].point;
			max = arr[i].point;
		}
	}
	max = arr[0].point;
	for (i = 1; i < n; i++) //нахождение максимального возраста
		if (arr[i].point > max)
		{
			max = arr[i].point;
			star = arr[i].lname;
		}
	min = arr[0].point;
	for (i = 1; i < n; i++) //нахождение минимального возраста
		if (arr[i].point < min)
		{
			min = arr[i].point;
			baby = arr[i].lname;
		}
	printf("the youngest relative is %s\nthe oldest relative is %s\n", baby, star);
	printf("%s %s\n", min, max);
	return 0;
}