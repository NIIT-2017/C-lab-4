#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "task3.h"
#define N 256

int isPalindrome(char * str)
{
	char * p_Left = str;
	char * p_Right = str + strlen(str) - 1; // Warum laesst sich die Variable als die des Zyklus initialisieren?
	for (p_Left; p_Left < p_Right; p_Left++, p_Right--)
		{
			if (*p_Left != *p_Right)
				return 0;
		}



	return 1;
}

