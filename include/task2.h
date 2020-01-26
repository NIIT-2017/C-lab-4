//Clab4 task2

/*Написать программу, которая с помощью массива указателей выводит слова строки в обратном порядке.
Пример: "буря мглою небо кроет" -> "кроет небо мглою буря"*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

char* reverseWords(char* in, char* out);