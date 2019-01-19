#include <string.h>

int isPalindrome(char *str)
{
	char *end;

	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';

	end = &str[strlen(str) - 1];

	while (str < end)
	{
		if (*str == *end)
		{
			str++;
			end--;
		}
		else
			return 0;
	}
	return 1;
}