#include "task3.h"

int isPalindrome(char* str) {
    char* start = str;
    char* end = &str[strlen(str) - 1];
    while(start < end) {
        if(*start == *end) {
            start++;
            end--;
        }
        else
            return 0;
    }
        
    return 1;
}