#include"task3.h"
#include<string.h>

int isPalindrome(char* str)
{
    char* start = &str[0];
    char* end = &str[strlen(str) - 1];
    while (start < end)
    {
        if (*start != *end)
            return 0;
        start++;
        end--;
    }
    return 1;
} 