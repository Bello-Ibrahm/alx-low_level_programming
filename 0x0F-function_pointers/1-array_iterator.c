#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through array
 *
 * @array: Pointer to array to go through
 * @size: Size of the array
 * @action: Pointer action function to take
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array == NULL) || (action == NULL))
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
