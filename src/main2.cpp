#include <stdio.h>
#include <string.h>
#include "task2.h"

#define N 128

int main()
{
    char in[N];
    char out[N];

    printf("Enter a line:\n");
    fgets(in, N, stdin);

    if (in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = '\0';

    printf("%s\n", reverseWords(in, out));

    return 0;
}