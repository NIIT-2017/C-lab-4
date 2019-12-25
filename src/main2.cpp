#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    srand(time(NULL));
    
    int secret = 1 + rand() % 100;
    int value = 1;
    int count = 0;

    while (1)
    {
        printf("Guess a number from 1 to 100:\n");
        int r = scanf("%d", &value);

        if (value <= 0 || value > 100 || r == 0)
        {
            printf("Incorrect number!\n");
            clean_stdin();
            continue;
        }

        int t = turn(value, secret);

        if (t > 0)
        {
            printf("Take less!\n");
            count++;
        }
        else if (t < 0)
        {
            printf("Take more!\n");
            count++;
        }
        else
        {
            printf("Correct! You guessed in %d attempts.\n", ++count);
            break;
        }
    }
    
    return 0;
}