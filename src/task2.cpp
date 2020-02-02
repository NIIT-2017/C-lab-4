#include<stdio.h>
#include<string.h>
#include"task2.h"

char* reverseWords(char *in, char *out)
{
	char* p1[SIZE / 2] = { 0 };
	int k = 0; //count of words
	int flag = 0;//if simbol==' '; flag==1 if simbol!=' '
	int j;

	for (int i = 0; i < strlen(in); i++) 
	{
		if (in[i] != ' ' && flag == 0)
		{
			flag = 1;
			p1[k] = &in[i]; //remember the address of hte beginning of the word
			k++;
		}
		else if (in[i] != ' ' && flag == 1)
			;

		else if (in[i] == ' ' && flag == 1)
			flag = 0;
	}
	
	k = k - 1; //this is an address of the last word
	for (j = 0; k >= 0, j < strlen(in); j++)
	{
		if (*p1[k] != ' ' &&*p1[k] != '\0')
		{
			out[j] = *p1[k];
			*(p1[k]++);
		}

		else if (*p1[k] == '\0')
		{
			out[j] = ' ';
			k--; //go to an adress of the next word
		}
		else if (*p1[k] == ' ' && k != 0)
		{
			out[j] = ' ';
			k--;
		}

		else if (*p1[k] == ' ' && k == 0) //for the first word of in[], out[] cat to end '\0'
			out[j] = '\0';
	}
	out[j] = '\0';
	
	return out;
}
