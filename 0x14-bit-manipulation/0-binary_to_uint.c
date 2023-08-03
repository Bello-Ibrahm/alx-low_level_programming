#include "main.h"

/**
 * binary_to_uint - Convert number to an unsigned int
 * @b: argument to convert
 * Return: Return unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		result = result << 1;
		if (b[i] == '1')
		{
			result = result | 1;
		}
	}
	return (result);
}

