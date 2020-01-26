//Clab4 task1

/*Написать программу, которая позволяет пользователю ввести несколько строк с клавиатуры,
а затем выводящую их в порядке возрастания длины строки.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

void lineSort(char* str[], int size);			// функция, сортирующая массив указателей
void printLines(const char* str[], int size);	// функция, печатающая строки в порядке массива str