#include "main.h"

/**
 * get_bit - Gets bit of an index
 * @n: Number to go through
 * @index: Index to go through
 * Return: Integer value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}

