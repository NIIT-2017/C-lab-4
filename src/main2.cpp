#include <stdio.h>
#include "task2.h"
#define SIZE 50
int main2()
{
    char in[SIZE];
    fgets(in, SIZE, stdin);
    char out[SIZE];
    reverseWords(in, out);
    printf("%s", out);
    return 0;
}