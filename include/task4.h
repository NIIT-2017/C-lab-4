#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <clocale>

#define LEN_MAX 256
#define NLINES_MAX 10
#define printf //

void lineSort(char* str[], int size);
void printLinesToFile(char* str[], int size, FILE* fp);
