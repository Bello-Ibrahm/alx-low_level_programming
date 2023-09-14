#include "lists.h"

/**
 * dlistint_len - Return number of elements in a linked list
 * @h: Head of a linked list
 *
 * Return: Return elements count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
