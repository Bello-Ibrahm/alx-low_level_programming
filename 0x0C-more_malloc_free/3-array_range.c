#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 *
 *
 * @min: This is the range min to allocate in the memory
 * @max: This is my range max to allocate in the memory
 *
 * Return: The pointer to the newly created array
 *         If min > max, return NULL
 *         If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int a, b;
	int *ptr_range;

	if (min > max)
		return (NULL);
	b = min;
	ptr_range = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr_range == NULL)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		ptr_range[a] = b;
		b++;
	}
	return (ptr_range);
}

