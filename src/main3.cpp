#include"task3.h"
#include<stdio.h>
#include<string.h>

int main()
{
    char str[256];

    printf("Enter your line: ");

    fgets(str, 256, stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    if (isPalindrome(str))
        printf("Your line is palindrome!\n");

    else
        printf("Your line is not palindrome!\n");
        
    return 0;
}