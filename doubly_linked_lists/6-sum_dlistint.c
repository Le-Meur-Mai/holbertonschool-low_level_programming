#include "lists.h"

/**
 * sum_dlistint- Add the integers contained in the nodes
 * of a double linked list
 * @head: point to the first node of the double linked list
 * Return: The sum of the integers contained in the nodes
 * of a double linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_of_int = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum_of_int += head->n;
		head = head->next;
	}
	return (sum_of_int);
}
