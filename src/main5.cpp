#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_NUMBER_OF_RELATIVES 100
#define MAX_SIZE_OF_NAME 20
#define MAX_HUMAN_AGE 100

int main()
{
    char buf[MAX_NUMBER_OF_RELATIVES][MAX_SIZE_OF_NAME] = { 0 };
    int number_of_relatives = 0;
    int age = 0;
    int min_age = MAX_HUMAN_AGE;
    int max_age = 0;
    char* young = NULL;
    char* old = NULL;

    printf("Input a number of relatives\n");
    scanf("%d", &number_of_relatives);

    for (int i = 0; i < number_of_relatives; i++)
    {
        printf("Input a name and an age of the %d relative in format 'name age'\n", i + 1);
        scanf("%s %d", buf[i], &age);

        if (age > max_age) 
        {
            max_age = age;
            old = buf[i];
        }
        
        if (age < min_age)
        {
            min_age = age;
            young = buf[i];
        }
    }

    if (number_of_relatives == 1)
        printf("%s is both old and young", young);
    else
    {
        printf("%s is young\n", young);
        printf("%s is old\n", old);
    }

    return 0;
}