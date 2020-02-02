#include <string.h>

int isPalindrome(char* str)
{
	char* end = &str[strlen(str) - 1];
	int i = 0;
	while (str[i])
	{
		if (*end == str[i])
		{
			i++;
			*end--;
			continue;
		}
		else
			return 0;
	}
	return 1;
}