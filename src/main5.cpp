#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 256

int getNameAge(char name[], char buf[]);
int convStrToInt(char str[], int slen, int i);
void clean_stdin(void);
void finishLine(char* line);

int main()
{
	printf("Enter the number of relatives: \n");
	int count = 0;
	int curAge = 0, minAge = 0, maxAge = 0;
	char* young;
	char* old;
	char names[100][SIZE];

	int result = scanf("%d", &count);
	if (result == 0 || count < 0)
	{
		printf("Invalid value!\n");
		return 1;
	}
	
	char buf[SIZE];

	printf("Enter the relatives name and age:\n");

	int i=0;
	clean_stdin();

	while (fgets(buf, SIZE, stdin) != NULL && i<count)
	{

		finishLine(buf);
		curAge = getNameAge(names[i], buf);
		if (curAge > maxAge)
		{
			maxAge = curAge;
			old = names[i];
		}
		if (curAge < minAge && minAge!=0 || minAge == 0)
		{
			minAge = curAge;
			young = names[i];
		}
		i++;
	}
	
	printf("The youngest relative - %s\n", young);
	printf("The oldest relative - %s\n", old);

	return 0;
}

int getNameAge(char name[], char buf[])
{
	int age = 0;

	char names[SIZE][SIZE];
	int inWord = 0, count=0;

	int i=0;
	int j = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			names[count][j] = buf[i];
			j++;
			//count++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			names[count][j] = buf[i];
			j++;
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			names[count][j] = '\0';
			count++;
			j = 0;
		}

		i++;
	}
	
	if (inWord == 1)
	{
		names[count][j] = '\0';
		count++;
	}

	int len = 0;
	for (int i = 0; i < count - 1; i++)
	{
		for (j = 0; j < strlen(names[i]); j++)
		{
			name[len] = names[i][j];
			len++;
		}
		if (i < count - 2)
		{
			name[len] = ' ';
			len++;
		}
		else
			name[len] = '\0';

	}
	
	age = convStrToInt(names[count-1], strlen(names[count-1]), strlen(names[count-1]));
	return age;
}

int convStrToInt(char str[], int slen, int i)
{
	if (i==1)
		return (str[slen - 1] - '0');
	else
		return (str[slen - i] - '0') * pow(10, i-1) + convStrToInt(str, slen, i-1);
}

void clean_stdin(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

void finishLine(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}