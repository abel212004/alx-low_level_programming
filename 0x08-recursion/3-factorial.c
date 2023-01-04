#include "main.h"

/**
 * factorial - function that returns factorials
 * @n: The number to find the factorial of.
 *
 * Return: a factorial
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
