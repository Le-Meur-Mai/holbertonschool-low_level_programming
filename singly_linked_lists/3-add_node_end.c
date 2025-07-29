#include "lists.h"

/**
 * _strlen- calculate the lenght of a string
 * @str: string you want to know the lenght
 * Return: the lenght of the string
 */
int _strlen(const char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
		for (; str[i] != '\0' ; i++)
		{
		}

	return (i);
}
/**
 * add_node_end- adding a node at the end of a single linked list
 * @head: pointer that point to the first node of the list
 * @str: string you want in your node
 * Return: A pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (new);
}
