#include "main.h"

/**
 * factorial - Gives factorial of number
 * @n: Number to use
 * Return: Returns factor of -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}

