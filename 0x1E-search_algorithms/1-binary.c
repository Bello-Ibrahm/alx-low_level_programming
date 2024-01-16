#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 *		using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:
 *	-1 if value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, middleBound, lowerBound, upperBound;

	if (array == NULL)
	{
		return (-1);
	}
	lowerBound = 0;
	upperBound = size - 1;

	while (lowerBound <= upperBound)
	{
		middleBound = (lowerBound + upperBound) / 2;
		printf("Searching in array: ");
		for (i = lowerBound; i <= upperBound; i++)
		{
			printf("%i%s", array[i], i == upperBound ? "\n" : ", ");
		}
		if (array[middleBound] == value)
		{
			return (middleBound);
		}
		else if (array[middleBound] < value)
		{
			lowerBound = middleBound + 1;
		}
		else
		{
			upperBound = middleBound - 1;
		}
	}
	return (-1);
}
