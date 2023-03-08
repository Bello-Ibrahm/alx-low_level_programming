#include "main.h"

/**
 * _pow_recursion - Gives power of int
 * @x: Integer to power
 * @y: Power to do
 * Return: Integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
