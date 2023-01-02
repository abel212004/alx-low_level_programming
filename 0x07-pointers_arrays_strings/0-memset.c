#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area WITH the provided character
 * @s: A pointer to the memory area to be filled.
 * @c: The character to used for filling the memory area intended.
 * @n: The number used as a parameter for that of bytes to be filled.
 * Return: a pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}