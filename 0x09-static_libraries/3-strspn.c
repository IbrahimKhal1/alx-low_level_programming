// File: 3-strspn.c
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
    unsigned int n = 0;
    char *a;
    while (*s)
    {
        for (a = accept; *a; a++)
        {
            if (*s == *a)
                break;
        }
        if (!*a)
            break;
        s++;
        n++;
    }
    return n;
}
