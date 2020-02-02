//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task4.h"

#define SIZE 1250
#define LINE 250
//#define NAME 25

extern void lineSort(char* str[], int size);

int main(void)
{
	FILE*fp;
	//char nameFile[NAME]; //if user wants to open another file
	char input[LINE][SIZE]; //from file to there
	char *pt_str[LINE];

	//puts("Enter name's file:");
	//scanf("%s", nameFile);

	if ((fp = fopen("task4.txt", "a+")) == NULL) //"a+" for readding the file and adding lines in file
	{
		puts("File open ERROR!");
		return 1;
	}

	int i = 0; //for not to go beyond the bounds of the array input
	while (i < LINE && fgets(input[i], SIZE, fp) != NULL)
	{
		if (input[i][strlen(input[i]) - 1] == '\n')
			input[i][strlen(input[i]) - 1] = '\0';

		pt_str[i] = input[i]; //copy addresses of entered lines
		i++;
	}
	input[i][strlen(input[i])] = '\0'; //for the last line, becouse it has not '\n'

	lineSort(pt_str, i);
	printLinesToFIle((const char**)pt_str, i, fp);

	if (fclose(fp) != 0)
		puts("Error closing the file!");

	return 0;
}
