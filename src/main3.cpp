#include <stdio.h>
#include "task3.h"
#define SIZE 50
int main()
{
    char str[SIZE];
    fgets(str, SIZE, stdin);
    printf("%d",isPalindrome(str));
    return 0;
}