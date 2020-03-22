#include<stdio.h>
#include<string.h>
#include"task3.h"


int main()
{
    char str[SIZE] = { 0 };
    printf("vvedite stroku\n");
    fgets(str, SIZE, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    if (isPalindrome(str) == 1)
        printf("palindrom\n");
    else
        printf("ne palindrom\n");
    return 0;
}