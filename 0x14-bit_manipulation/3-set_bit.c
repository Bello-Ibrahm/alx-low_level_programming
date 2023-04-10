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
 * set_bit - Sets a bit
 * @n: Integer to grab
 * @index: to go through
 * Return: Return a value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}	
