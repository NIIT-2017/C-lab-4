#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#define size 256

char* reverseWords(char* in, char* out)
{
    char* word[size] = { NULL };
    int InWord = 0;
    int i = 0, j = 0;
    while (in[i])
    {
        if (in[i] != ' ' && InWord == 0)//начало слова
        {
            InWord = 1;
            word[j] = &in[i];
            j++; //после последнего слова также увеличивается
            i++;
        }
        else if (in[i] != ' ' && InWord == 1)//в слове
        {
            i++;
        }
        else if (in[i] == ' ' && InWord == 1)//конец слова
        {
            InWord = 0;
            i++;
        }
    }
    i = 0;
    while (j > 0)
    {
        char* symbl = word[j-1];
        while( symbl && *symbl != ' ' && *symbl != '\0')
        {
            out[i++] = *symbl++;
        }
        out[i++] = '_';
        j--;
    }
    out[i-1] = '\0';

    return 0;
}
