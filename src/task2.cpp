#include <stdio.h>
#include <stdlib.h>
# include <string.h>

char *reverseWords(char *in, char *out) {
    char *arr[128];
    int i = 0;
    int j = 0;
    char *pWord;
    int inWord = 0;
    char *firstElment = out;

    while (*in) {
        if (*in != ' ' && inWord == 0) {     //You read a string up to the end and looking for first word in string
            arr[i] = in;                    //You write down an adress of first word`s symbol of wotd in array of pointers
            i++;
            inWord = 1;
        } else if (*in == ' ' && inWord == 1) {
            inWord = 0;
        }
        in++;                                    //You move to next element in  array of pointers
    }

    for (j = i - 1; j >= 0; j--) {                //You read a string from the end to begining
        pWord = arr[j];
        while (*pWord != '\0' && *pWord != ' ') {
            *out = *pWord;
            pWord++;
            out++;
        }
        *out = ' ';
        out++;
    }
    out--;
    *out = 0;
    return firstElment;
}