#include "lists.h"

/**
 * free_dlistint- free the memory allocated to a double linked list
 * @head: point to the first node of the double linked list
 */

void free_dlistint(dlistint_t *head)
{
	{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
}
