#include "task2.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char in[512];
    char out[512];
    printf("Enter a string\n");
    fgets(in, 512, stdin);
    if (*in != 0 && in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = '\0';

    reverseWords(in, out);

    puts(out);
    
    return 0;
}
