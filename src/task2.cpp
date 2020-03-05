#include"task2.h"
#include<string.h>
#include<stdio.h>

char* reverseWords(char* in, char* out)
{
    int x = 0;
    int Word = 0;
    int count = 0;
    char *buf[64];
    for (; x < strlen(in); x++)
    {
        if (in[x] == ' ')
            Word = 0;
        else if (in[x] != ' ' && Word == 0)
        {
            Word = 1;
            buf[count++] = &in[x];
        }
    }
    buf[count] = &in[x];

    if (*in != 0)
    {
        int w = 0;
        for (; count; count--)
        {
            for (int s = 0; buf[count - 1] + s != buf[count]; s++, w++)
            {
                out[w] = *(buf[count - 1] + s);
            }
            if (out[w - 1] != ' ')
            {
                out[w] = ' ';
                w++;
            }

        }
        if (out[w - 1] == ' ')
            out[w - 1] = '\0';
        else
        {
            out[w] = '\0';
        }
    }
    else
        out[0] = 0;
    return out;
}