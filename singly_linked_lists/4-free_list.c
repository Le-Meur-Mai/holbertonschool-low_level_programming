#include "lists.h"
/**
 * free_list- free a single linked list
 * @head: first node in the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
