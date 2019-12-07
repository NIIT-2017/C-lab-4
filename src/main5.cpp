#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    char* young = NULL;
    char* old = NULL;
    int age;
    int minAge = 0;
    int maxAge = 0;

    char famaly[128][16];

    int numbersOfRelatives = 0;
    printf("Enter number of relatives\n");
    scanf("%i", &numbersOfRelatives);

    for (int i = 0; i < numbersOfRelatives; i++)
    {
        printf("Enter the name of the %i relative\n", i + 1);
        scanf("%s", famaly[i], &age);
        printf("Enter her/his age\n");
        scanf("%i", &age);
        if (i == 0)
        {
            young = famaly[i];
            old = famaly[i];
            minAge = age;
            maxAge = age;
        }
        if (age < minAge)
        {
            minAge = age;
            young = famaly[i];
        }
        else if (age > maxAge)
        {
            maxAge = age;
            old = famaly[i];
        }
    }

    printf("The youngest relative is %s\nThe oldest relative is %s\n", young, old);
    
    return 0;
}