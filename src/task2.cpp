#include <stdio.h>
#include <string.h>
#include "task2.h"
#define SIZE 64

char* reverseWords(char *in, char *out)
{
	char* p1[SIZE / 2] = { 0 };
	int num = 0; //count of words
	int flag = 0; // 1=inword
	int j;
	for (int i = 0; i < strlen(in); i++)
	{
		if (in[i] != ' ' && flag == 0)
		{
			flag = 1;
			p1[num] = &in[i]; // adress of start word
			num++;
		}
		else if (in[i] == ' ' && flag == 1)
			flag = 0;
	}
	num -= 1; //for last word
	for (j = 0; num >= 0, j < strlen(in); j++) // start revers
	{
		if (*p1[num] != ' ' && *p1[num] != '\0')
		{
			out[j] = *p1[num];
			*(p1[num]++);
		}
		else if (*p1[num] == '\0')
		{
			out[j] = ' ';
			num--; //go next word
		}
		else if (*p1[num] == ' ' && num != 0)
		{
			out[j] = ' ';
			num--;
		}
		else if (*p1[num] == ' ' && num == 0) // close string
			out[j] = '\0';
	}
	out[j] = '\0';
	return out;
}