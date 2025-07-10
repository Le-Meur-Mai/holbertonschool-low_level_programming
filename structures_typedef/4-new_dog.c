#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen- lenght of a string
 * _strlen: lenght of a string
 * @s: string
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	for (lenght = 0; s[lenght] ; lenght++)
	{
	}
	return (lenght);
}

/**
 * _strcpy- copy a string
 * _strcpy: copy string src into string dest
 * @dest: string of destination
 * @src: string of origin
 * Return: string of destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog- add a new dog from a struct
 * new_dog: add a new dog from struct dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
	{
		return (NULL);
	}
	doggy->age = age;

	doggy->name = malloc((_strlen(name)) + 1);

	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->name = _strcpy(doggy->name, name);

	doggy->owner = malloc((_strlen(owner)) + 1);

	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->owner = _strcpy(doggy->owner, owner);

	return (doggy);
}
