#include<string.h>
#include"task3.h"

int isPalindrome(char *str)
{
   int total =1;
   char *p1;
   char *p2;
   p1=str;
   p2=&str[strlen(str)-1];
   while(p1 < p2)
   { 
       if(*p1==*p2)
       {
	 *p1++;
	 *p2--;
       }
       else
       {
	 total=0;
	 break;
       }
   }
   return total;
}
