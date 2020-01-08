#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#define SIZE 20

int main () {
    int i = 0;
    int j = 0;
    int countOfRelatives = 0;
    int currentAge = 0;
    int minAge = INT_MAX;
    int maxAge = -1;
    char *young = NULL;
    char *old = NULL;
    char **names;
    
    printf("How much relatives does your family include?\n");
    scanf("%d", &countOfRelatives);
    names = (char**)calloc(countOfRelatives, sizeof(char*));
    for (i=0; i < countOfRelatives; i++) {
        names[i] = (char*)calloc(128, sizeof(char));
        printf("Enter a name of your relative\n");
        scanf("%s", names[i]);
        printf("Enter an age of your relative\n");
        scanf("%d", &currentAge);

        if (currentAge < minAge) {
            minAge = currentAge;
            young = names[i];
        } if (currentAge > maxAge) {
            maxAge = currentAge;
            old = names[i];
        }
    }
    printf("The youngest relative is %s\n", young);
    printf("The oldest relative is %s\n", old);



    return 0;
}
