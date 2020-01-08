#include "task4.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[NLINES_MAX][LEN_MAX] = { 0 };
	int n = 0;
	int size = 0;
	char* newstr[NLINES_MAX];

	FILE* fin, *fout;
	if(!(fin = fopen("in.txt", "r"))) {
		puts("Ошибка открытия файла in.txt!\n");
		return 1;
	}

	while(!feof(fin)) {
		if(fgets(str[n], LEN_MAX, fin) != NULL) {
			size_t len = strlen(str[n]);
			if(str[n][len - 1] == '\n') {
				str[n][len - 1] = '\0';
			}
			printf("str[%d] = %s\n", n, &str[n]);

			if((newstr[n] = (char*)calloc(len, sizeof(char))) != NULL)
				newstr[n] = str[n];

			printf("newstr[%d] = %s\n", n, newstr[n]);
			n++;
		}
	}

	fclose(fin);

	printf("\n");

	if(!(fout = fopen("out.txt", "w"))) {
		puts("Ошибка открытия файла out.txt!\n");
		return 1;
	}

	//printf("n = %d\n", n);
	lineSort(newstr, n);
	printLinesToFile(newstr, n, fout);

	fclose(fout);

}