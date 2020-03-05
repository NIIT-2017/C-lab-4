#include"task3.h"
#include<stdio.h>
#include<string.h>
#define N 256

int main(void)
{
  char str[N]={0};
  printf("Enter the string!\n");
  fgets(str,N,stdin);
  if(str[strlen(str)-1]=='\n')
       str[strlen(str)-1]='\0';
  if(isPalindrome(str)==1)
     printf("it is a palindrome!\n");
  else
     printf("it isn't a palindrome!\n");
  return 0;
}
