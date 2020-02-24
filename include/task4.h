#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define LINES 256
#define SYMBOLS_IN_LINE 256
void lineSort(char* str[], int size);
void printLinesToFile(const char* str[], int size, FILE* fp);
