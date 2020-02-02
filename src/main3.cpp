#include "task3.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char str[512];
    printf("Enter a string\n");
    fgets(str, 512, stdin);
    if (*str != 0 && str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    if (isPalindrome(str))
        printf("This is a palindrom\n");
    else
        printf("This isn't palindrom\n");
    
    return 0;
}