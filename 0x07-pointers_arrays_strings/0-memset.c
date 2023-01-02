#include "main.h"

/**
 *_memset - Fills the first n bytes of the memory area
 *@s: A pointer of the memory area to be filled
 *@c: The character to fill the memory area with
 *@n: number of bytes that are going to be filled
 *main: no main in this function
 *creating a function that works as memset
 *objective : using memset() function
 *Return : character
 */
char *_memset(char *s, int c, size_t n)
{
    unsigned int i;
    for (i = 0; i < n; i++)
       s[i] = c;
    return (s);
}