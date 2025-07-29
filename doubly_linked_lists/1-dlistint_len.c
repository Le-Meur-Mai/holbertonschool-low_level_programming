#include "lists.h"

/**
 * dlistint_len- print the number of elements in a double_linked_list
 * @h: pointer to the head struct of the list
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			i++;
			h = h->next;
		}
	}
	return (i);
}
