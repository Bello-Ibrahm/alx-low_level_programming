#include "main.h"

/**
 * get_bit - Gets a bit
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

/**
 * clear_bit - Clear index to 0
 * @n: Integer to pass
 * @index: index to go to
 * Return: Return integer value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) &= ~(1 << index);
	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}

