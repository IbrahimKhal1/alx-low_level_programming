// File: 9-strcpy.c
#include "main.h"
char *_strcpy(char *dest, char *src)
{
    char *start = dest;
    while ((*dest++ = *src++));
    return start;
}
