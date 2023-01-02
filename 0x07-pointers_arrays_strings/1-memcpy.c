#include "main.h"

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: maximum number of bytes used as placement
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
