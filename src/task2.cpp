#include "task2.h"

char* reverseWords(char* in, char* out)
{
    int i = 0;
    int flag = 0;
    int count = 0;
    char* p[SIZE] = { 0 };
    while (in[i])
    {
        if (flag == 0 && in[i] != ' ')
        {
            p[count] = &in[i];
            flag = 1;
            count++;
        }
        else if (flag == 1 && in[i] == ' ')
        {
            flag = 0;
        }
        i++;
    }
    count = count - 1;
    char* address_of_symbol=p[count];
    i = 0;
    while (1)
    {
        if (count != 0 && (*address_of_symbol == '\0' || *address_of_symbol == ' '))
        {
            out[i] = ' ';
            count--;
            address_of_symbol = p[count];
        }
        else if (count == 0 && *address_of_symbol == ' ')
        {
            out[i] = '\0';
            break;
        }
        else
        {
            out[i] = *address_of_symbol;
            address_of_symbol++;
        }

        i++;
    }

    return out;
}