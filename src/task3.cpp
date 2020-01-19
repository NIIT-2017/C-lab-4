#include "task3.h"
int isPalindrome(char* str)
{
    int len = strlen(str);
    if (str[len-1] == '\n')
        len--;
    for (int i=0;i<len/2;i++)
    {
        if (str[i] != str[len - i-1])
            return 0;
    }
    return 1;
}