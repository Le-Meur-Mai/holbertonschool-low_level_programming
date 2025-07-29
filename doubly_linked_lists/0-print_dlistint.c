#include "lists.h"
/**
 * print_dlistint- print the elements in a double linked list
 * @h: pointer to a node, at the beginning it's the first node of the list
 * Return: The number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	}
	return (i);
}
