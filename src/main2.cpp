#include"task2.h"
#include<stdio.h>
#include<string.h>
#define N 256

int main(void)
{
   char in[N]={0};
   char out[N]={0};
   printf("Enter the string!\n");
   fgets(in,N,stdin);
   reverseWords(in,out);
   printf("Sorted String!\n");
   puts(out);
   return 0;
}
