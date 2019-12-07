#include <string.h>

int isPalindrome(char* str)
{
    int flag = 0;
    if (strlen(str) >= 3)
    {
        char* begin = str;
        char* end = &str[strlen(str) - 1];
        flag = 1;
        while (end > begin)
        {
            if (*begin != *end)
            {
                flag = 0;
                break;
            }
            begin++;
            end--;
        }
    }

    return flag;
}