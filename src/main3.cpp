#include <stdio.h>
#include "task3.h"
#include <string.h>
#define size 256

int main()
{
    char str[size] = { 0 };
    printf("write a string ");
    fgets(str, size, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    if (isPalindrome(str) == 1)
        printf("The string is a palindrome");
    else
        printf("The string is NOT a palindrome");
    return 0;
}