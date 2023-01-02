#include "main.h"
/**
 *creating a function that works as memset
 *objective : using memset() function
 *Return : character
 */
void *_memset(void *s, int b, size_t n)
{
    unsigned int i;
    unsigned char *j = s, value = b;
    for(i=0; i<n;i++)
        j[i] = value;
    return(j);
}