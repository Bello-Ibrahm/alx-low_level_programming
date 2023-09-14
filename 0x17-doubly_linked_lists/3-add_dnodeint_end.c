#include "lists.h"
/**
 * add_dnodeint_end - Add node at the end of a list
 * @head: head address of linked list
 * @n: number of new value for new node
 * Return: address of new node or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
