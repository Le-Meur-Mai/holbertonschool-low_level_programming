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

/**
 * delete_dnodeint_at_index- Delete a node in a double linked list, located at
 * the index given in argument
 * @head: Points to the first node of the double linked list
 * @index: Correspond to the emplacement of the node you want to delete,
 * starting from index 0
 * Return: 1 if the function succeed or -1 if the function failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_to_delete;
	dlistint_t *node;

	if (*head == NULL)
		return (-1);

	if (index >= dlistint_lenght(*head) || dlistint_lenght(*head) == 0)
		return (-1);

	node_to_delete = get_dnodeint_at_index(*head, index);

	if (node_to_delete == NULL)
		return (-1);

	if (index == (dlistint_lenght(*head) - 1) && node_to_delete->prev != NULL)
	{
		node = node_to_delete->prev;
		node->next = NULL;
	}
	else if (index == 0 && node_to_delete->next != NULL)
	{
		node = node_to_delete->next;
		node->prev = NULL;
		*head = node;
	}
	else if (node_to_delete->next != NULL && node_to_delete->prev != NULL)
		*head = NULL;
	else
	{
	node = node_to_delete->prev;
	node->next = node_to_delete->next;
	node = node_to_delete->next;
	node->prev = node_to_delete->prev;
	}

	free(node_to_delete);

	return (1);
}
