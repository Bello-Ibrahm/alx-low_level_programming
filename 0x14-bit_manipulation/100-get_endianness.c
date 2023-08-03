#include "main.h"

/**
 * get_endianness - function to checks the endianness
 *
 * void: No argument
 *
 * Return: 0 if big endian, 1 if little endian
 *
 */
int get_endianness(void)
{
	unsigned int endian, n = 1;
	char *c = (char *)&n;


	if (*c)
	{
		endian = 1;
	}
	else
	{
		endian = 0;
	}

	return (endian);
}
