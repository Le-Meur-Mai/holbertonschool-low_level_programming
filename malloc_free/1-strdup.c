#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- duplicate a string with dynamic allocation
 * _strdup: duplicate string with dynamic allocation
 * @str: string to duplicate
 * Return: NULL if str is NULL, or the pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	int i = 0;
	int j = 0;

	if (*str == '\0')
	{
		return (NULL);
	}

for (; str[i] ; i++)
{
}

copy = malloc (sizeof(char) * i);

if (copy == NULL)
{
	return (NULL);
}
for (; j < i ; j++)
{
	copy[j] = str[j];
}
return (copy);
}