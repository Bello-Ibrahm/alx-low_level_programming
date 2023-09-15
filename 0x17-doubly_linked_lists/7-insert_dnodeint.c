#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: address of linked list
 * @idx: index to place list
 * @n: value of n
 * Return: return address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int ndex = 1;

	tmp = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if ((*h) == NULL)
	{
		if (idx == 0)
		{
			*h = new;
			return (new);
		}
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (tmp->next != NULL && ndex != idx)
	{
		tmp = tmp->next, ndex++;
	}
	if (ndex == idx)
	{
		new->prev = tmp, new->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
