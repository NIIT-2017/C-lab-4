#pragma once
#include<string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 40
void lineSort(char* str[], int size);
void printLines(const char* str[], int size);
int fillArr(char*** arr, FILE* input);
struct Node
{
    char* str;
    Node* next;
};
void addNode(Node* head, char* str);