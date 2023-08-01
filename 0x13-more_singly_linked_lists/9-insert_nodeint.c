#include "lists.h"

/**
 * listint_len -  get the number of elements in a linked listint_t list
 * @h: head pointer of singly linked list
 *
 * Return: Number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h != 0)
		h = h->next, size++;

	return (size);
}

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: linked list
 * @idx: index of node
 * @n: value of head
 * Return: newly added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head), count = 0;
	listint_t *new_node, *temp1, *temp2;

	if (head == 0 && idx > 0)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);

	if (head == 0 && idx == 0)
	{
		new_node->n = n; 
		new_node->next = 0;
		*head = new_node;
		return (new_node);
	}

	if (idx > len)
	{
		free(new_node);
		return (0);
	}
	temp1 = *head;
	new_node->n = n;
	while (count < idx && idx != 0)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		count++;
	}
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = temp1;
	}
	else
	{
		temp2->next = new_node;
		new_node->next = temp1;
	}
	return (new_node);
}

