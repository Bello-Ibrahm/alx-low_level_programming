#include "lists.h"
/**
 * add_node - adds a new node
 * @head: head address pointing to another pointer
 * @str: string to put through
 * Return: returns an address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;

	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

