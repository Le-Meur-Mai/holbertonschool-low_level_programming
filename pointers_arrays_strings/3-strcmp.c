#include "main.h"
/**
  * _strcmp- difference between two strings
  * _strcmp: difference between two strings
  * @s1: first string
  * @s2: second string
  * i: counting
  * difference: value of the difference between the two strings
  * Return: return the value of difference
  **/

int _strcmp(char *s1, char *s2)

{
	int ls1 = 0;
	int ls2 = 0;
	int i;
	int difference = 0;

	for (; s1[ls1] ; ls1++)
	{
	}
	for (; s2[ls2] ; ls2++)
	{
	}
		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			if (s1[i] == s2[i])
			{
			return (0);
			}
			else if (s1[i] > s2[i] || s1[i] < s2[i])
			{
			return (s1[i] - s2[i]);
			}
		}
		if (ls2 > ls1)
		{
			for (; s2[ls1] ; ls1++)
			{
				return (s1[ls1] - s2[ls1]);
			}
		}
		if (ls1 > ls2)
		{
			for (; s1[ls2] ; ls2++)
			{
				return (s1[ls2] - s2[ls2]);
			}
		}
	return (difference);
}
