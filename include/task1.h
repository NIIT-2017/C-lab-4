#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <clocale>

#define LEN_MAX 256
#define NLINES_MAX 100

int strCmp(const void *p1, const void *p2);
void lineSort(char* str[], int size);
void printLines(char* str[], int size);
