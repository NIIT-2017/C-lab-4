#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
    char str[SIZE] = { 0 };
   
    printf("Enter a string: ");
    fgets(str, SIZE, stdin);
    if (str[strlen(str - 1)] == '\n')
    {
        str[strlen(str - 1)] = 0;
    }
    if (isPalindrome(str)==1)
        printf("a palidrome\n");
    else 
        printf("not a palidrome\n");
    
    return 0;
}