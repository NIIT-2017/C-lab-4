#include <string.h>

char* reverseWords(char* in, char* out)
{
    char* p[32];
    int flag = 0;
    int numbersOfWords = 0;

    for (int i = 0; i < 512; i++)
    {
        if (in[i] == '\0')
        {
            p[numbersOfWords] = &in[i];
            numbersOfWords++;
            break;
        }
        if (in[i] != ' ' && flag == 0)
        {
            flag = 1;
            p[numbersOfWords] = &in[i];
            numbersOfWords++;
        }
        if (in[i] == ' ' && flag)
            flag = 0;
    }

    if (*in != 0)
    {
        int j = 0;
        for (numbersOfWords; numbersOfWords > 1; numbersOfWords--)
        {
            int i = 0;
            while (p[numbersOfWords - 2] + i != p[numbersOfWords - 1])
            {
                out[j] = *(p[numbersOfWords - 2] + i);
                j++;
                i++;
            }
            if (out[j - 1] != ' ')
            {
                out[j] = ' ';
                j++;
            }
        }
        if (out[j - 1] == ' ')
            out[j - 1] = '\0';
        else
            out[j] = '\0';
    }
    else
        out[0] = 0;

    return out;
}