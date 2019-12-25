#include <stdio.h>
#include <string.h>
#include "task3.h"

int main()
{
    char line[128];

    printf("Enter a line:\n");
    fgets(line, 128, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    removeSpaces(line);

    printf("String is %sa palindrome\n", isPalindrome(line) ? "" : "NOT ");

    return 0;
}