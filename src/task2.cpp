#include "task2.h"

char * reverseWords(char * in, char *out)
{
	char* buf[SIZE] = { 0 };
    int inWord = 0;
    int i = 0;
    int j = 0;
    while (in[i])
    {
        if (in[i] != ' ' && inWord == 0)   
        {
            buf[j] = &in[i];
            inWord = 1;
            j++;
        }
        else if (in[i] == ' ' && inWord == 1) 
            inWord = 0;
        i++;
    }
    i = 0;
    j--;
    while (j >= 0)      
    {
        while (*buf[j] != '\0' && *buf[j] != ' ')
        {
            out[i] = *buf[j];
            buf[j]++;
            i++;
        }
        out[i] = ' ';
        i++;
        j--;
    }
    out[i - 1] = '\0';
    return out;
}