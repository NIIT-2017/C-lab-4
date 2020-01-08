#include <stdio.h>
#include <stdlib.h>
# include <string.h>

int isPalindrome(char* str) {
    char* toTheBeginig = str;
    char* toTheEnd;

    while (*str) {
        str++;
    }
    str--;
    toTheEnd = str;

    while (toTheBeginig < toTheEnd) {
        if (*toTheBeginig != *toTheEnd) {
            return 0;
        } else {
            toTheBeginig++;
            toTheEnd--;
        }
    }
    return 1;
}
