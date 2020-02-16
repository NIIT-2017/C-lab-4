#include <stdio.h>
#include <string.h>
#include "task2.h"

/*void clean_stdin(void)
{
    int c;
    do
    {
        c = getchar();
    }

    while (c != '\n' && c != EOF);
}*/
int main()
{
    char in[SIZE] = { 0 };
    char out[SIZE] = { 0 };
    
    printf("Enter a string: ");
    fgets(in, SIZE, stdin);
    /*clean_stdin();*/
    if (in[strlen(in - 1)] == '\n')
    {
        in[strlen(in - 1)] = 0;
    }
   printf("Reversed string: %s", reverseWords(in, out));
    return 0;
}