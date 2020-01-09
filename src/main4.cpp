#include "task4.h"
#include "C:\labs\C-lab-4\src\task1.cpp"

int main()
{
    FILE* fp;
    
    fp = fopen("lines.txt", "rt");

    if (!fp)
    {
        puts("Error: file is not found");
        return 1;
    }

    int ch;
    int size = 0;
    while ((ch = fgetc(fp)) != EOF)
        if (ch == '\n')
            size++;
    
    rewind(fp);


    char str[LINES][SYMBOLS_IN_LINE] = { 0 };
    char* p[LINES] = { 0 };
    for (int i = 0; i < size; i++)
    {
        fgets(str[i], SYMBOLS_IN_LINE, fp);

        if (str[i][strlen(str[i]) - 1] == '\n')
            str[i][strlen(str[i]) - 1] = '\0';

        p[i] = str[i];
    }

    fp = fopen("lines.txt", "at");

    lineSort(p,size);

    printLinesToFile((const char**)p, size, fp);

    fclose(fp);

    return 0;
}