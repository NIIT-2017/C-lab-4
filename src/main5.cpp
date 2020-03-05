#include<stdio.h>
#include<string.h>
#define MAS 10
#define SYMBOLS 256

int main()
{
    char ArrayOfNames[MAS][SYMBOLS] = { 0 };
    char namber[10][15] = { "1","2","3","4","5","6","7","8","9","10" };

    char* young = NULL, * old = NULL;
    int age = 0, minAge = 0, maxAge = 0, relatives = 0;

    printf("Enter the number of relatives: ");
    scanf("%d", &relatives);

    for (int x = 0; x < relatives; x++)
    {
        printf("\n Enter the name of the %s relatives: ", namber[x]);
        scanf("%s", ArrayOfNames[x]);
        printf("Enter his age: ");
        scanf("%d", &age);
        if (age > maxAge)
        {
            maxAge = age;
            old = ArrayOfNames[x];
        }
        if (minAge == 0 && age != 0 || age < minAge)
        {
            minAge = age;
            young = ArrayOfNames[x];

        }
    }
        if (minAge == 0 && maxAge == 0)
            printf("Your didn`t enter age!!!");
        else
            printf("The oldest in your family is %s, and the youngest is %s!\n", old, young);
        
    
        return 0;
}