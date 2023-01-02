#include "main.h"
/**
 *creating a function that works as memset
 *objective : using memset() function
 *Return : character
 */
void *_memset(void *s, int c, size_t n)                                                                                              
{                                                                                                                                    
        unsigned int i;                                                                                                          
        unsigned char *memory = s, value = c;                                                                                        
        for (i = 0; i < n; i++)                                                                                          
                memory[i] = value;                                                                                               
                                                                                                                                     
        return (memory);                                                                                                    
}
