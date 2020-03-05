#include"task2.h"
#include<stdio.h>
#include<string.h>
#define SIM 256

int main()
{
    char in[SIM] = { 0 };
    char out[SIM] = { 0 };
    printf("Enter your line: \n");
    fgets(in, SIM, stdin);
    if (in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = '\0';

   
    printf("\n%s\n", reverseWords(in, out));

    return 0;
}