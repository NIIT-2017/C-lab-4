#include"task3.h"

int isPalindrome(char* str)
{
    char* low = &str[0];
    char* height = &str[strlen(str) - 1];
    while (low < height)
    {
        if (*low != *height)
            {
                return 0;
            }
        low++;
        height--;
    }
    return 1;
}
