#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars, and initialize
 * it with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: An array initialized with the specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);
	
	if (size <= 0)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
