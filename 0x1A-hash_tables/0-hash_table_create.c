#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 *
 * Return: pointer of the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **arr;

	arr = calloc(size, sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	ht = malloc(sizeof(*ht));
	if (ht == NULL)
	{
		free(arr);
		return (NULL);
	}

	ht->size = size;
	ht->array = arr;

	return (ht);
}
