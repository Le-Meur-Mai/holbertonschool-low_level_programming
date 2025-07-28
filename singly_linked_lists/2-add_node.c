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
 * add_node- Adding a node to a single linked list
 * @head: pointer that point to the pointer of the new node
 * @str: string you want stock in your new node
 * Return: the pointer that point to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
