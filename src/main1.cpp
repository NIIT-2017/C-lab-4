#include "task1.h"
#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	int size = 0;
	char line[SIZE][SIZE] = { {0} };
	char* str[SIZE];
	printf("Enter line\n"); //���� ���������� �����
	while(fgets(line[size], SIZE, stdin) != 0 && line[size][0] != '\n')
	{
		if (line[size][strlen(line[size]) - 1] == '\n') //���������� ������ ������
		{
              line[size][strlen(line[size]) - 1] = 0; //�������� \n
		      str[size] = line[size]; //������ ������ �������� ������� � ������ ����������
			  size++;
		}
	}
	lineSort(str, size);
	printLines((const char**)str, size);//����� ��������������� �����
	return 0;
}
