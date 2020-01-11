#include "task2.h"

char* reverseWords(char* in, char* out)
{
    int len = strlen(in);
    int count = 0;
    for (int i = 0; i <len-1; i++)
    {
        if (in[i] != ' ' && (in[i + 1] == ' '||in[i+1]=='\n'))
            count++;
    }
    char** arr = (char**)malloc(count * sizeof(char**));
    int number = 0;
    for (int i = 0; i < len-1; i++)
    {
        if ((in[i] == ' ' && in[i + 1] != ' ') || (i == 0 && in[0] != ' ' && in[0] != '\n'))
        {
            if(i!=0)
                arr[number] = &in[i+1];
            else
                arr[number] = &in[i];
            number++;
        }
    }
    int posInString = 0;
    for (int i = count-1; i >=0; i--)
    {
        for (int j = 0; arr[i][j] != ' '&&arr[i][j]!='\n'; j++)
        {
            out[posInString] = arr[i][j];
            posInString++;
        }
        out[posInString] = ' ';
        posInString++;
    }
    out[posInString] = '\0';
    return out;
}