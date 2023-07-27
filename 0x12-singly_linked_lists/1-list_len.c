#include "lists.h"
/**
 * list_len - the length of list_t struct
 * @h: the node head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i, count = 0;

	for (i = 0; h != NULL; i++)
	{
		count++;
		h = h->next;
	}

	return (count);
}

