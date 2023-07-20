#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum all the args
 * @n: Integers to sum
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum;
	va_list argSum;

	if (n == 0)
		return (0);
	va_start(argSum, n);
	sum = 0;
	for (count = 0; count < n; count++)
	{
		sum += va_arg(argSum, int);
	}
	va_end(argSum);
	return (sum);
}

