#include "task3.h"
int isPalindrome(char* str)
{
    int len = strlen(str)-1;
    if (str[len] == '\n')
        str[len] = str[0];
    for (int i=0;i<len/2;i++)
    {
        if (str[i] != str[len - i-1])
            return 0;
    }
    return 1;
}