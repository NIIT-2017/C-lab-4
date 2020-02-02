#include "task1.h"

int main() {
	setlocale(LC_ALL, "russian");

	char *linePtr[NLINES_MAX];
	char *getstr;
	char str[LEN_MAX] = { 0 };

	printf("¬ведите несколько строк:\n\n");
	int n = 0;
	while(1) {
		getstr = fgets(str, LEN_MAX, stdin);
		if(*getstr == '\n')
			break;

		size_t len = strlen(str);
		if(str[len - 1] == '\n') {
			str[len - 1] = '\0';
		}
		else {
			++len;
		}
			
		if((linePtr[n] = (char *)calloc(len, sizeof(char))) != NULL)
			strcpy(linePtr[n], str);

		//printf("linePtr[%d] = %s\n", n, linePtr[n]);
		n++;
	}

	//printf("n = %d\n", n);
	//printLines(linePtr, n);
	lineSort(linePtr, n);
	printLines(linePtr, n);

	for(int i = 0; i < n; i++) {
		free(linePtr[i]);
	}

}