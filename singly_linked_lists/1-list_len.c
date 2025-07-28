#include "lists.h"

/**
 * list_len- print the number of elements in a singly_linked_list
 * @h: pointer to the head struct of the list
 * Return: Number of elements in the list
 */

size_t list_len(const list_t *h)
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
