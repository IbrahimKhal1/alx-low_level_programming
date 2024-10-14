// File: 5-strstr.c
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
    for (; *haystack; haystack++)
    {
        char *h = haystack, *n = needle;
        while (*h && *n && *h == *n)
        {
            h++;
            n++;
        }
        if (!*n)
            return haystack;
    }
    return NULL;
}
