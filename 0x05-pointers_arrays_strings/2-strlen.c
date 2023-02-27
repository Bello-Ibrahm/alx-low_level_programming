#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: Pointer variable
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
