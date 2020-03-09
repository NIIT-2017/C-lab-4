#include <stdio.h>
#include <string.h>
#include "task3.h"

#define N 256

int main()

{
	char buf[N];
	printf("Vvedite stroku:\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	if (isPalindrome(buf) == 1)
		printf("Stroka %s eto polindrom", buf);
	else
		printf("Stroka %s ne polindrom", buf);
	return 0;
}