#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at a given index
 * @head: head of address
 * @index: index to delete
 * Return: 1 on success, 0 on failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int ndex = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	tmp = *head;
	while (tmp->next && ndex != index)
	{
		ndex++;
		tmp = tmp->next;
	}
	if (ndex == index)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
		}
		else
		{
			tmp->prev->next = NULL;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}
