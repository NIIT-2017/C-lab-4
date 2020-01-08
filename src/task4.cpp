#include "task4.h"

int strCmp(const void *p1, const void *p2) {
	return strlen(*(char**)p2) - strlen(*(char**)p1);
}

void lineSort(char* str[], int size) {
	qsort(str, size, sizeof(char *), strCmp);
}

void printLinesToFile(char* str[], int size, FILE* fp) {
	while(size > 0) {
		char* nWord = str[size - 1];
		printf("nWord = %s\n", nWord);
		fputs(nWord, fp);
		fputs("\n", fp);
		size--;
	}
}
