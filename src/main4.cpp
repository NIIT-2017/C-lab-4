#include"task4.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char str[N][N]={0};
   char *p[N]={0};
   int count =0;
   FILE *fp;
   fp=fopen("text.txt","r");
   if(fp==NULL)
   {
      puts("Error!");
      exit(1);
   }
   while(count < N && fgets(str[count],N,fp)!=NULL)
   {
      p[count]=str[count];
      count++;
   }
   fclose(fp);
   lineSort(p,count);
   fp=fopen("result.txt","w");
   if(fp==NULL)
   { 
      puts("Error!");
      exit(1);
   }
   printLinesToFile((const char**)p,count,fp);
   fclose(fp);
   return 0;
}
