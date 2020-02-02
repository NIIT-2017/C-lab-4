#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define nameNumber 16
#define nameLength 32

int main()
{
    int number = 0, age = 0, maxAge = 0, minAge = 0; 
    char name[nameNumber][nameLength] = { {0} };
    char* young = NULL;
    char* old = NULL;

    printf("Write the number of your family's members ");
    scanf("%d", &number);

    for (int i = 0; i < number; i++)
    {
        printf("%d. Write a name ", i + 1);
        scanf("%s", name[i]);
        printf("Write the age ");
        scanf("%d", &age);
        if (minAge == 0 && maxAge == 0)
        {
            minAge = age;
            young = name[i];
            maxAge = age;
            old = name[i];
        }
        else if (age > maxAge)
        {
            maxAge = age;
            old = name[i];
        }
        else if (age < minAge)
        {
            minAge = age;
            young = name[i];
        }
    }
    printf("the youngest is %s '\n'", young);
    printf("the eldest is %s ", old);
    return 0;
}