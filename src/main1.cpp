#include"task1.h"
#define SIZE 80
int main()
{
    char str[SIZE][SIZE];
    char* pstr[SIZE];                 
    int i = 0;
    printf("enter lines:\n");
    do
    {
        fgets(str[i], SIZE, stdin);   
        if (str[i][0] == '\n')        
        {
            str[i][0] = '\0';
            break;
        }
        if (str[i][strlen(str[i]) - 1] == '\n')
            str[i][strlen(str[i]) - 1] = '\0';
        pstr[i] = &str[i][0];
        i++;
    } while (i < SIZE);
    lineSort(pstr, i);                 
    printLines((const char**)pstr, i);
    return 0;
}