#include "main.h"
/**
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
