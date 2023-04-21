#include "main.h"

/**
 * flip_bits - Flip bits
 * @n: first args
 * @m: second args
 * Return: Unsigned int value of number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
