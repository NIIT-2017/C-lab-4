#include<stdio.h>
#include"task1.h"
#define N 40
#define M 80

int main(void)
{
   char str[N][M];
   char *p[N];
   int count=0;
   printf("Enter the string!\n");
   while(count < N && *fgets(str[count],M,stdin)!='\n')
   {
      p[count]=str[count];
      count++;
   }
   lineSort(p,count);
   puts("Sorted String!");
   printLines((const char**)p,count);
   return 0;
}
