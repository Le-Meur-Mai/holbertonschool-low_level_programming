#include "lists.h"

/**
 * print_list- Print a singly linked list of structur
 * who contain a string and the lenght of the string
 * @h: A singly linked list of structur
 * Return: The number of elements
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
		}
		else if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
		}
		h = h->next;
	}
	}
	return (i);
}
