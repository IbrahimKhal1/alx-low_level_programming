#include "main.h"

/**
 * *_memcpy - This copies memory area from src to dest
 * @dest:Signifies destination
 * @src: Signifies source
 * @n: max bytes to use
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
