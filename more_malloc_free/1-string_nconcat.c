#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat- combine two strings together
 * string_nconcat: combine s1 and the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2 to combine
 * Return: pointer to the newly allocated string of the fusion
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int h = 0;
	char *fusion;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	for (; s1[i] ; i++)
	{
	}
	for (; s2[j] ; j++)
	{
	}
	h = j + i;

	if (j <= n)
	{
		n = j;
	}
	fusion = malloc((i + n) + 1);

	if (fusion == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; h != i ; h++)
	{
		fusion[h] = s1[h];
	}
	for (j = 0 ; j < n; j++)
	{
		fusion[h] = s2[j];
		h++;
	}
	return (fusion);
}
