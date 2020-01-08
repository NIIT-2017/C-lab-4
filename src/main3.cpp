#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task3.h"

int main () {
    char string[128];
    int result = 0;

    printf("Enter your string \n");
    fgets(string, 128, stdin);

    if(string[strlen(string)-1] == '\n') {
        string[strlen(string)-1] = 0;
    }

    if (isPalindrome(string)){
        printf("It`s a palindrome!");
    }else{
        printf("It isn`t a palindrome");
    }

    return 0;
}