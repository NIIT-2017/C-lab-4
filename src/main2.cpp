#include <stdio.h>
#include <string.h>
#include "task2.h"

int main()
{
	char in[SIZE] = { 0 };
    char out[SIZE] = { 0 };
    printf("vvedite stroku:\n");
    fgets(in, SIZE, stdin);
    if (in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = '\0';
    printf("%s\n", reverseWords(in, out));
	return 0;
}