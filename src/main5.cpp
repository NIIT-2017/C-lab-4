#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <clocale>

int main() {
	setlocale(LC_ALL, "russian");

	char* young = 0, * old = 0;
	int max = 0, min = 0, durring = 0, num = 0;
	char family[30][256] = { 0 };
	printf("Please, enter number of relatives\n");
	scanf("%d", &num);
	getchar();// использую для того чтобы в буфере не осталось \n
	if(num == 0 || num == 1) {
		printf("Error!\n");
		return 0;
	}
	for(int i = 0; i < num; i++) {
		printf("Please enter name of %d relative\n", i + 1);
		fgets(family[i], 256, stdin);
		if(family[i][strlen(family[i]) - 1] == '\n')
			family[i][strlen(family[i]) - 1] = '\0';
		printf("Enter his/her age\n");
		scanf("%d", &durring);
		getchar();// использую для того чтобы в буфере не осталось \n
		if(i == 0) {
			max = durring;
			min = durring;
			young = family[i];
			old = family[i];
		}
		else if(i != 0 && durring > max) {
			max = durring;
			old = family[i];
		}
		else if(i != 0 && durring < min) {
			min = durring;
			young = family[i];
		}
	}
	while(*old != '\0') {
		printf("%c", *old);
		*old++;
	}
	printf(" - %d", max);
	putchar('\n');
	while(*young != '\0') {
		printf("%c", *young);
		*young++;
	}
	printf(" - %d", min);

}