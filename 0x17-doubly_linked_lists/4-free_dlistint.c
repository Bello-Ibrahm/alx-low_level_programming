#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
