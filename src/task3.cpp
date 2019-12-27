#include <string.h>

int isPalindrome(char * str)
{
    char *s = str;
    char *t = str + strlen(str) - 1;

    while (t > str)
    {
        if (*str != *t) return 0;
        str++;
        t--;
    }
    return 1;
}

void removeSpaces(char * str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < strlen(str); j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
}