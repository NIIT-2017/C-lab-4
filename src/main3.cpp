#include<stdio.h>
#include<string.h>
#include"task3.h"
#define size 256

int main()
{
    char str[size];
    printf("Enter some text:\n");
    fgets(str, size, stdin);

    if (str[strlen(str) - 1] == '\n')
        {
            str[strlen(str) - 1] = '\0';
        }

    if (isPalindrome(str) == 1)
        {
            printf("True, it's palindrome \n");
        }
    else
        {
            printf("False, it's not palindrome\n");
        }
    return 0;
}
