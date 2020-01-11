#include "task3.h"
int isPalindrome(char* str)
{
    int len = strlen(str);
    for (int i=0;i<(len-1)/2;i++)
    {
        if (str[i] != str[(len - 2) - i])
            return 0;
    }
    return 1;
}