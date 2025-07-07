#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- combine two strings together
 * str_concat: combine two strings together
 * @s1: the first string to combine
 * @s2: the second string to combine
 * Return: the string with the two string combine
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int h = 0;
	char *fusion = NULL;

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (NULL);
	}
	for (; s1[i] ; i++)
	{
	}
	for (; s2[j] ; j++)
	{
	}
	j = (j + i);

	fusion = malloc(sizeof(char) * j);

	if (fusion == NULL)
	{
		return (NULL);
	}
	for (; h != i ; h++)
	{
		fusion[h] = s1[h];
	}
	i = 0;

	for (; h < j ; h++)
	{
		fusion[h] = s2[i];
		i++;
	}
	return (fusion);
}