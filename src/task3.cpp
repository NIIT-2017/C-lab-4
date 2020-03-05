#include <string.h>

int isPalindrome(char *str)
{
	int len = 0, i, j, count = 0;
	char *tstart, *tfinish;

	len = strlen(str);
	tstart = str;
	tfinish = &str[len - 1];

	for (i = 0, j = 0; i < len; i++, j++)
	{
		if (*(tstart + i) == *(tfinish - j))
			count++;
	}
	if (count == len)
		return 1;
	else
		return 0;
}