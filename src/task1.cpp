#include "task1.h"
#include <stdlib.h>
struct string 
{
    int len;
    char* str;
};
void lineSort(char* str[], int size)
{
    string* strings=(string*)malloc(sizeof(string)*size);
    for (int i = 0; i < size; i++)
    {
        strings[i].len = strlen(str[i]);
        strings[i].str = str[i];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1; j++)
        {
            if (strings[j].len > strings[j + 1].len)
            {
                struct string tmp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++)
        str[i] = strings[i].str;
    
}
void printLines(const char* str[], int size)
{
    for (int i = 0; i < size; i++)
        printf("\n%s", str[i]);
}
int fillArr(char*** arr, FILE* input)
{
    Node* head = 0, * last = 0;
    int count = 0;
    char* buf;
    while (1)
    {
        buf = (char*)malloc(BUFFER_SIZE);
        
        if (feof(input))
            break;
        fgets(buf, BUFFER_SIZE, input);
        if (buf[0] == '\n')
            break;
        if (!head)
        {
            head = (Node*)malloc(sizeof(Node));
            head->str = buf;
            last = head;
        }
        else
        {
            addNode(last, buf);
            last = last->next;
        }
        count++;
    }
    *arr = (char**)malloc(count * sizeof(char**));
    for (int i = 0; i < count; i++)
    {
        (*arr)[i] = head->str;
        head = head->next;
    }
    return count;
}
void addNode(Node* head, char* str)
{
    head->next = (Node*)malloc(sizeof(Node));
    head->next->str = str;
}