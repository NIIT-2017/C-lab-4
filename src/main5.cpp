#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int main()
{
    int N;
    printf("Enter number of relatives");
    scanf("%d", &N);
    char** names = (char**)malloc(sizeof(char**) * N);
    char* oldest, * youngest;
    int maxAge=0, minAge = 140;
    for (int i = 0; i < N; i++)
    {
        names[i] = (char*)malloc(SIZE);
        scanf("%s", names[i]);
        int age;
        scanf("%d", &age);
        if (age > maxAge)
        {
            maxAge = age;
            oldest = names[i];
        }
        if (age < minAge)
        {
            minAge = age;
            youngest = names[i];
        }
    }
    printf("\nYoungest : %s  : %d ", youngest, minAge);
    printf("\nOldest : %s  : %d ", oldest, maxAge);
}