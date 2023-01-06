#include <stdio.h>
#include "main.h"

/**
 * main - Printing name of program
 * @argc: Counting arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Successfull)
 */

int main(int argc, char *argv[])
{

int count = 0;

if (argc > 0)
{
/*WHILE true - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
