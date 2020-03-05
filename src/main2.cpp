#include<stdio.h>
#include<string.h>
#include"task2.h"
#define size 256

int main()
{
    char in[size];
    char out[size];
    printf("enter some text:\n");
    fgets(in, size, stdin);
    if (in[strlen(in) - 1] == '\n')
        {
            in[strlen(in) - 1] = '\0';
        }
    printf("%s", reverseWords(in, out));
    return 0;
}
