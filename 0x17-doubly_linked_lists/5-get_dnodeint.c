#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at the end of index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmpCount;
	unsigned int count = 0;

	tmpCount = head;
	if (head == NULL)
		return (NULL);
	while (tmpCount != NULL && count != index)
	{
		count++;
		tmpCount = tmpCount->next;
	}
	if (index == count)
		return (tmpCount);
	else
		return (NULL);
}
