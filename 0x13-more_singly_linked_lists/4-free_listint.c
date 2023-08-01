#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	if (head == 0)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

