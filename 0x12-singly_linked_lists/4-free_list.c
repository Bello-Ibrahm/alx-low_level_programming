#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer var head
 */
void free_list(list_t *head)
{
	int i;
	list_t *temp;

	for (i = 0; head != NULL; i++)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

