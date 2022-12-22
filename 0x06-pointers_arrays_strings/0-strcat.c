#include "main.h"

/**
 * main - Entry Point 
 * 
 * Return: 0 successfull
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}