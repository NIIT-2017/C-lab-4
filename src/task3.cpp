#include "task3.h"

int isPalindrome(char* str)
{
    char* left = str;
    char* right = str + (strlen(str) - 1);

    while (right - left > 0)
    {
        if (*left == *right)
            return 1;
        else
            return 0;
    }
}