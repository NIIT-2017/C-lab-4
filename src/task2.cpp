#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#define size 256

int cmp2(const void* a, const void* b)
{
    return *(int*)b - *(int*)a;
}

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
  
    qsort(word, size, sizeof(int), cmp2);
    for (int i = 0, j = 0; word[j]; j++)
    {
        char* symbl = word[j];
        while (symbl && *symbl != ' ' && *symbl != '\0')
        {
            out[i] = *symbl++;
            i++;
        }
        out[i++] = ' ';
    }
    out[i] = '\0';

    return 0;
}
