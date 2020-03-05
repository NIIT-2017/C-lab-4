#include<stdio.h>
#define N 256
#define M 256
int main(void)
{
  char *young;
  char *old;
  int countRelatives =0;
  char names[N][M]={0};
  int age=0;
  int maxAge=0;
  int minAge=100;
  puts("How many relatives have you got?");
  scanf("%d",&countRelatives);
  for(int i =0; i < countRelatives;i++)
    {
	puts("Enter the name");
	scanf("%s",names[i]);
	puts("Enter the age");
	scanf("%d",&age);
	if(age < minAge)
	{
	  minAge=age;
	  young=&names[i][0];
	}
	if(age > maxAge)
	{
          maxAge = age;
	  old =&names[i][0];
	}
    }
  puts("Oldest");
  puts(old);
  puts("Younger");
  puts(young);
  return 0;
}
