#include"task2.h"
#include<string.h>

char *reverseWords(char *in,char*out)
{
   char *p[N]={0};
   int count =0;
   int inWord=0;
   if(in[strlen(in)-1]=='\n')
        in[strlen(in)-1]='\0';
   for(int i=0;in[i]!='\0';i++)
   {
      if(in[i]==' ')
	inWord=0;
      else
	{
          if(!inWord)
            {
               inWord=1;
	       p[count]=&(in[i]);
	       count++;
	    }
	}
   }
   int k=0;
   for(int i=count-1;i>=0;i--)
   {
     int j=0;
     for(int j=0; j<(strlen(p[i]));j++)
       if(p[i][j]==' ')
	 break;
       else
	 {
            out[k]=p[i][j];
	    k++;
	 }
       out[k]=' ';
       k++;
   }
   out[strlen(in)]='\0';
}
