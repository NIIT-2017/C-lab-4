#include"task2.h"
#define SIZE 256
int main()
{
    char in[SIZE] = { 0 };
    char out[SIZE] = { 0 };
    printf("enter a line:\n");
    fgets(in, SIZE, stdin);
    if (in[strlen(in) - 1] == '\n')
        in[strlen(in) - 1] = '\0';
    printf("reverse line-> %s", reverseWords(in, out));
    return 0;
}