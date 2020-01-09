#include "task3.h"

int main()
{
    char buf[SIZE] = { 0 };
    printf("Input the line\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    switch (isPalindrome(buf))
    {
    case 1:
        printf("%s - is palindrome", buf);
        break;
    case 0:
        printf("%s - is not palindrome", buf);
        break;
    }

    //char buf[256] = "madamimadam";
    //printf ("%d\n", isPalindrome(buf));
    //char buf2[256] = "my name is Vasya";
    //printf("%d\n", isPalindrome(buf2));

    return 0;
}