#include<stdio.h>
#include<string>
#define N 30
#define M 256

int main()
{
    char person[N][M];
    char* young;
    char* old;
    int max_age = 0;
    int min_age = 100;
    int age = 0;  
    int num = 0;  
    int i_old = 0;
    int i_young = 0;
    printf("enter number of persons\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("enter the name of %d person\n", i + 1);
        scanf("%s", person[i]);
        printf("enter the age of %d person\n", i + 1);
        scanf("%d", &age);
        if (age < min_age)
        {
            min_age = age;
            i_young = age;
            young = & person[i][0];
        }
        if (age > max_age)
        {
            max_age = age;
            i_old = age;
            old = & person[i][0];
        }
    }
    printf("the older is %s, he/she is %d\n", old, i_old);
    printf("the younger is %s, he/she is %d\n", young, i_young);
    return 0;
}