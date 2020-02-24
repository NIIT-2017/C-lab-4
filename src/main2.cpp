#include "task2.h"

int main()
{
    char buf[SIZE] = { 0 };
    char word[SIZE] = { 0 };

    printf("Input the line\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    //char buf[256] = "i'm glad to see you";
    //char word[256];

    reverseWords(buf, word);

    printf("%s", word);

    return 0;
}