#include "task3.h"
#include<string.h>

int isPalindrome(char* str)
{
    char* go = str;
    char* end = &str[strlen(str) - 1];
    
    for (; go < end; go++, end--)
    {
        if (*go != *end)
            return 0;
    }

    return 1;
}
