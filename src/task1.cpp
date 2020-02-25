#include"task1.h"
#include<string.h>
#include<stdio.h>

void lineSort(char *str[],int size)
{
  char *temp;
  for(int i =0; i <size-1;i++)
    for(int j=0; j <size-i-1;j++)
       if(strlen(str[j]) > strlen(str[j+1]))
	 {
           temp = str[j];
	   str[j] = str[j+1];
	   str[j+1] =temp;
	 }
}
void printLines(char *str[],int size)
{
    for(int i =0;i <size;i++)
	    puts(str[i]);
}
