#pragma once
#include <stdio.h>
#include "task1.h"
#include "task4.h"
int main()
{
    FILE* fpin = fopen("Data.txt", "r");
    char** arr;
    int count=fillArr(&arr, fpin);
    fclose(fpin);
    lineSort(arr, count);
    FILE* fpout = fopen("Output.txt", "w");
    printLinesToFile((const char**)arr,count, fpout);  
    return 0;
}