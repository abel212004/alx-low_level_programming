#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - starts the program
 * Return: 0 successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
		printf("and is greater than 5\n");
	if ((n % 10) == 0)
		printf("and is 0\n");
	if ((n % 10) < 6 && (n % 10) != 0)
		printf("and is leass than 6 and not 0\n");
	return (0);
}
