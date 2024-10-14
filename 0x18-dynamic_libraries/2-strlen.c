// File: 2-strlen.c
#include "main.h"
int _strlen(char *s)
{
    int length = 0;
    while (*s++)
    {
        length++;
    }
    return length;
}
