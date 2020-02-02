#include <stdio.h>

#define A 20
#define B 20

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{        
    char arr[A][B], *young, *old;

    int i = 0,
        age = 0,
        count = 0,
        minAge = 0,
        maxAge = 0;

    while (1)
    {
        printf("Enter a quantity of relatives in your family:\n");
        scanf("%d", &count);
        if (count <= 0)
        {
            printf("Enter a correct number more than 0!\n");
            clean_stdin();
        }
        else break;
    }

    printf("Enter name and age:\n");

    while (i < count)
    {
        while (1)
        {
            scanf("%s%d", arr[i], &age);
            if (age < 0 || age > 120)
                printf("Enter name and correct age from 0 to 120!\n");
            else
                break;
        }

        if (i == 0)
        {
            minAge = maxAge = age;
            young = old = arr[i];
        }

        if (age < minAge)
        {
            minAge = age;
            young = arr[i];
        }
        else if (age > maxAge)
        {
            maxAge = age;
            old = arr[i];
        }
        i++;
    }

    printf("The youngest is %s\nThe oldest is %s\n", young, old);
        
    return 0;
}