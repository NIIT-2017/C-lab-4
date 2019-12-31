#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include "task1.h"
#define SIZE 20

int main() {
 
    char str[SIZE][128];
    char* pstr[SIZE];
   

    printf("Enter your strings \n");
    
    int countStr = 0;

    for (int i = 0; i < SIZE; i++) {
        fgets(str[i], 128, stdin);
        if(str[i][0] == '\n') {
            break;
        }
        pstr[i] = str[i];
        countStr++;
    }

    lineSort(pstr, countStr);
    printLines((const char**)pstr, countStr);

    return 0;
}