#include "task2.h"

#define printf //

char* reverseWords(char* in, char* out) {

	int i = 0, inWord = 0, n = 0;
	char* pWord[LEN_MAX] = { NULL };

	while(in[i]) {
		if(in[i] != ' ' && inWord == 0) {	//начало слова
			inWord = 1;
			pWord[n] = &in[i];
			printf("%c\n", in[i]);
			printf("&in[%d] = %p\n", n, &in[i]);
			printf("pWord[%d] = %p\n", n, pWord[n]);
			printf("pWord[%d] = %s\n", n, pWord[n]);
			n++;

		}
		else if(in[i] == ' ' && inWord == 1) {	//конец слова
			inWord = 0;
		}
		i++;
	}

	printf("n --> %d\n", n);
	putchar('\n');

	i = 0;
	while(n > 0) {
		char* nWord = pWord[n - 1];
		printf("pWord[%d - 1] = %p\n", n, pWord[n - 1]);
		printf("nWord = %p\n", nWord);
		printf("nWord = %s\n", nWord);

		while(nWord && *nWord != ' ' && *nWord != '\0') {
			out[i++] = *nWord++;
		}
		out[i++] = ' ';
		n--;
	}
	out[i] = '\0';
	out[i - 1] = '\0';
	
	printf("out = %s\n", out);

	return out;
}