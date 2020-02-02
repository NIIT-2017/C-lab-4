//Clab4 task2

#include "task2.h"

int main()
{
	char in[SIZE], out[SIZE];
	puts("Enter a line and I will turn it!");

	fgets(in, SIZE, stdin);

	printf("%s", reverseWords(in, out));

	return 0;
}
