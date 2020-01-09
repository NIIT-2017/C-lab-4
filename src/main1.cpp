#include "task1.h"

int main()
{
    char buf[LINES][SYMBOLS_IN_LINE] = { 0 };
    char* p[LINES] = { 0 };

    printf("Input the lines\n");

    int size = 0;
    for (int i=0; i < LINES; i++)
    {
        fgets(buf[i], SYMBOLS_IN_LINE, stdin);
        size++;

        if (buf[i][strlen(buf[i])-1]=='\n')
            buf[i][strlen(buf[i]) - 1] = '\0';

        p[i] = buf[i];
        
        if (buf[i][0] == '\0')
            break;
    }

    lineSort(p, size);
    printLines((const char**)p, size);

    //char buf[6][256] = { "123456","123","12","1","1234","12345" };
    //char* p[] = { buf[0],buf[1],buf[2],buf[3],buf[4],buf[5] };
    
    //lineSort(p, 6);
    //printLines((const char**)p, 6);
    
    return 0;
}
