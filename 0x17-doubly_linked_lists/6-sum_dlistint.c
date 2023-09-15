#include "lists.h"
/**
 * sum_dlistint - Sum all the data of a linked list
 * @head: head pointer for sum
 * Return: return the sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
