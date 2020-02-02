#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <clocale>

#define nameNumber 16
#define nameLength 32

int main() {
	setlocale(LC_ALL, "russian");

    int number = 0, age = 0, maxAge = 0, minAge = 0;
    char name[nameNumber][nameLength] = { {0} };
    char* young = NULL;
    char* old = NULL;

    printf("¬ведите количество родственников: ");
    scanf("%d", &number);

    for(int i = 0; i < number; i++) {
        printf("¬ведите им€ %d-го родственника ", i + 1);
        scanf("%s", name[i]);
        printf("¬ведите возраст родственника: ");
        scanf("%d", &age);
        if(minAge == 0 && maxAge == 0) {
            minAge = age;
            young = name[i];
            maxAge = age;
            old = name[i];
        }
        else if(age > maxAge) {
            maxAge = age;
            old = name[i];
        }
        else if(age < minAge) {
            minAge = age;
            young = name[i];
        }
    }

    printf("\n");
    printf("—амый молодой родственник: %s\n", young);
    printf("—амый старый родственник: %s\n", old);

}