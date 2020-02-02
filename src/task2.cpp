#include <string.h>

char * reverseWords(char * in, char * out)
{
    int i = 0, flag = 0, count = 0;
    char * s[15];

    while (in[i])
    {
        if (in[i] != ' ' && flag == 0)
        {
            *(s + count) = &in[i];
            flag = 1;
            count++;
        }
        else if (in[i] == ' ' && flag == 1)
            flag = 0;
        i++;
    }

    int j = 0, m = 0;
    while (j < strlen(in))
    {
        for (int k = 0; k < strlen(s[count - 1 - m]); k++)
        {
            if (*(s[count - 1 - m] + k) == ' ') break;
            out[j] = *(s[count - 1 - m] + k);
            j++;
        }
        out[j] = ' ';
        j++;
        m++;
    }

    if (out[strlen(in)] == ' ')
        out[strlen(in)] = '\0';

    return out;
}