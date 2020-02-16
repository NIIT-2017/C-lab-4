#include <stdio.h>
#include <string.h>
#include "task2.h"


int main()
{
    char in[SIZE] = { 0 };
    char out[SIZE] = { 0 };
    
    printf("Enter a string: ");
    fgets(in, SIZE, stdin);

    if (in[strlen(in - 1)] == '\n')
    {
        in[strlen(in - 1)] = 0;
    }
   printf("Reversed string: %s", reverseWords(in, out));
    return 0;
}