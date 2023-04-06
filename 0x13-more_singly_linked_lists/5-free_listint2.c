#include "lists.h"
/**
 * free_listint2 - Free nodes and list and set head to null
 * @head: This is my struct
 */
void free_listint2(listint_t **head)
{
    if (head == NULL) {
        return;
    }

    listint_t *current = *head;
    while (current != NULL) {
        listint_t *temp = current;
        current = current->next;
        free(temp);
    }

    *head = NULL;
}
