#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 256

char* reverseWords(char* in, char* out)
{
	char* arr[SIZE];
	int i = 0; //������� �������� � �������
	int j = 0;
	char *S;
	int inWord = 0; //������ - �� ������
	char *element = out;

	while (*in)
	{
		if (*in != ' ' && inWord == 0) //���� ����� ������
		{
			arr[i] = in; //������ ������� ������� � ������� ���������
			i++;
			inWord = 1;
		}
		else if (*in == ' ' && inWord == 1) //���� ������ �����������
		{
			inWord = 0;			
		}
        in++; //������� � ���������� �������� � ������� ���������
	}
	for (j = i - 1; j >= 0; j--) //����� ������ �� ������ �� �����
	{
		S = arr[j];
		while (*S != ' ' && *S != '\0')
		{
			*out = *S;
			S++;
			out++;
		}
		*out = ' ';
		out++;
	}	
	out--;
	*out = 0;
	return element;
}