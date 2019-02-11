#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <string.h>
#include <stdio.h>

char * reverseWords(char * in, char *out)
{
	char * pointers[64] = { 0 };
	int count = 0;  //������� �������� ���������� ����
	int inWord = 0; //���� ��������� �����

	for (int i = 0; in[i] != '\0';i++)
	{
		if ((in[i] >= 'A' && in[i] <= 'Z')
			|| (in[i] >= 'a' && in[i] <= 'z')
			|| (in[i] >= '!' && in[i] <= '9'))
		{
			if (!inWord) //inWord==0; or inWord!=0;
			{
				inWord = 1;
				pointers[count++] = in + i; // ��������� , ��� ��� � ����� ������� �� ���������� ����� 
			}

		}
		else
		{
			inWord = 0;
		}
	}
	int count2 = 0;
	for (int i = count - 1; i >= 0; i--)
	{
		int j = 0;
		int a = strlen(in)-1;
		
		while ((pointers[i][j] >= 'A' && pointers[i][j] <= 'Z')
			|| (pointers[i][j] >= 'a' && pointers[i][j] <= 'z')
			|| (pointers[i][j] >= '!' && pointers[i][j] <= '9'))   // ��� (*(pointers[i]+j))
		{
			//printf("%c", pointers[i][j]);
			
			*(out + count2) = pointers[i][j];
			count2++;
			j++;
		}
		*(out + count2) = ' ';
		count2++;
	}
	//*(out + count2-1) = '\n';
	*(out + count2 ) = '\0';
	return out;
}