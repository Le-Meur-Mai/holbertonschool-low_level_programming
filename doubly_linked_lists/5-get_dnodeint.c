#include "lists.h"

/**
 * dlistint_lenght- print the number of elements in a double_linked_list
 * @h: pointer to the head struct of the list
 * Return: Number of elements in the list
 */

unsigned int dlistint_lenght(const dlistint_t *h)
{
	unsigned int i = 0;

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

/**
 * get_dnodeint_at_index- Get the node corresponding to the arguments from head
 * @head: Point to the first node of the double chained list
 * @index: Position of the node starting from the header in a double linked
 * list you want to return
 * Return: A pointer to the node wanted
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int lenght_of_list = 0;
	unsigned int i = 0;
	dlistint_t *node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	lenght_of_list = dlistint_lenght(head);

	if (lenght_of_list == 0 || lenght_of_list < index)
	{
		return (NULL);
	}
	for (; i < index ; i++)
	{
		node = node->next;
	}
	return (node);
}
