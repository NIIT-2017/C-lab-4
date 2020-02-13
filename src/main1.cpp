#include"task1.h"
#define SIZE 80
int main()
{
    char str[SIZE][SIZE];
    char* pstr[SIZE];                 //declarations of an array of integer pointers from SIZE elements
    int i = 0;
    printf("enter lines:\n");
    do
    {
        fgets(str[i], SIZE, stdin);   //fgets for array "str[i]"
        if (str[i][0] == '\n')        // check for end of lines input
        {
            str[i][0] = '\0';
            break;
        }
            if (str[i][strlen(str[i]) - 1] == '\n')
                str[i][strlen(str[i]) - 1] = '\0';
            pstr[i] = & str[i][0];
            i++;
    } while (i < SIZE);
    lineSort(pstr, i);                 //function, sorting an array of pointers
    printLines((const char**)pstr, i); 
    return 0;
}