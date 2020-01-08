#include "task2.h"

int main() {
	setlocale(LC_ALL, "russian");

	char in[LEN_MAX] = { 0 };
	char out[LEN_MAX] = { 0 };

	printf("¬ведите несколько слов в строке:\n");
	fgets(in, LEN_MAX, stdin);

	size_t len = strlen(in);
	if(in[len - 1] == '\n') {
		in[len - 1] = '\0';
	}

	printf("%s\n", reverseWords(in, out));

}
