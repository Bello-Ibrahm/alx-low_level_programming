#include "main.h"

/**
 * helper - Helps decide if I'm right
 * @i: Integer to guess
 * @n: Integer to get root of
 * Return: Value of root
 */

int helper(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
			return (-1);
		j = helper(i + 1, n);
		return (j + 1);
	}
	return (0);
}

/**
 * _sqrt_recursion - Returns square root
 * @n: Integer to return
 * Return: Returns int of square root
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (helper(i, n) == n && n != 1)
		return (-1);
	return (helper(i, n));
}
