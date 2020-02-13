#include"task4.h"
#define SIZE 10

int main()
{
    int i = 0;
    char str[SIZE][256];
    char* pstr[SIZE];
    FILE* read = fopen("bookread.txt", "rt");
    FILE* rec = fopen("bookrec.txt", "wt");
    if (read == NULL)
    {
        puts("File open erorr!");
        return 0;
    }
    while (fgets(str[i], 256, read) != NULL)
    {
        if (str[i][strlen(str[i]) - 1] == '\n')
            str[i][strlen(str[i]) - 1] = '\0';
        pstr[i] = str[i];
        i++;
    }
    lineSort(pstr, i);
    printLinesToFile((const char**)pstr, i, rec);
    fcloseall();
    return 0;
}