#include "main.h"

/**
 * helper - Does it for me
 * @i: Helper int
 * @n: Integer I'm testing
 * Return: Value
 */

int helper(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (helper(i + 1, n));
	return (1);
}

/**
 * is_prime_number - Is prime or not
 * @n: Integer to compare
 * Return: Boolean
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (helper(i, n));
}
