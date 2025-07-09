#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	unsigned int i = strlen(s1);
	unsigned int j = strlen(s2);
	unsigned int h = 0;
	char *fusion;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	h = j + i;

	if (j <= n)
	{
		fusion = malloc(h + 2);
	}
	else if (j > n)
	{
		fusion = malloc((h - n) + 2);
	}
	if (fusion == NULL)
	{
		return (NULL);
	}
	for (h = 0 ; h != i ; h++)
	{
		fusion[h] = s1[h];
	}
	for (i = 0 ; i < n && i < j ; i++)
	{
		fusion[h] = s2[i];
		h++;
	}
	return (fusion);
}
