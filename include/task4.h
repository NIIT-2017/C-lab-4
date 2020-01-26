//Clab4 task4

/* Написать программу, сортирующую строки(см.задачу 1), но использующую строки, прочитанные из текстового файла.
Результат работы программы также записывается в файл.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task1.h"

void printLinesToFile(const char* str[], int size, FILE* fp); //функция, печатающая строки в порядке массива str