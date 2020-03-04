#include"task3.h"
#define SIZE 256

int main()
{
    char str[SIZE] = { 0 };
    printf("enter a line, and I will say if the string is a palindrome\n");
    fgets(str, SIZE, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    if (isPalindrome(str) == 1)
        printf("YES, it is palindrome\n");
    else
        printf("NO, it is not palindrome\n");
    return 0;
}