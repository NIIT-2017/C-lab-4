#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task2.h"

int main() {

    char in[128];
    char out[128];

    printf("Enter your phrase.\n");
    fgets(in, 128, stdin);
    if (in[strlen(in) - 1] == '\n') {
        in[strlen(in) - 1] = 0;
    }


    printf("%s", reverseWords(in, out));


    return 0;
}