#include "lists.h"

/**
 * add_dnodeint- Adding a node at the beginning of a double chained list
 * @head: Pointer that point to the first node of the list
 * @n: Integer you want to include in the new node
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	return (new);
}
