#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"
#define N 512





int main()
{
	printf("Please, enter any string to mix the words vice versa\n");
	char inputWs[N];
	char outputWs[N];
	fgets(inputWs, N, stdin);
	if (inputWs[strlen(inputWs) - 1] = '\n') inputWs[strlen(inputWs) - 1] = '\0';
	printf("The following string is going to be turned vice versa:\n");
	for (char *p_input = inputWs; *p_input != '\0'; *p_input++)
		printf("%c", *p_input);
	printf("\n >>>> reversed to >>>>> \n");
	printf("%s", reverseWords(inputWs, outputWs));

	return 0;
}