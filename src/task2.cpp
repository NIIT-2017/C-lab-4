#include "task2.h"
#include <stdio.h>
#include <string.h>
#define size 256

char* reverseWords(char* in, char* out)
{
	char *p_str[size];
	int flag = 0;
	int j, i = 0;
	int count = 0;

	while (in[i])
	{
		if ((in[i] != ' ') && (flag == 0))
		{
			p_str[count] = &in[i];
			flag = 1;
			count++;
		}
		else if ((in[i] == ' ') && (flag == 1))
		{
			flag = 0;
		}
   	 i++;
	}

    	i = 0;
	for (int j = count - 1; j >= 0; j--)
	{
		while (*p_str[j] != ' ' && *p_str[j] != '\0')
		{
			out[i] = *p_str[j];
			p_str[j]++;
			i++;
		}
		if (j != 0)
            {
                out[i] = ' ';
                i++;
            }
        else
            {
                out[i] = '\0';
            }
	}
    return out;
}



