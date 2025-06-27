#include "main.h"
/**
  * _strcmp- difference between two strings
  * _strcmp: difference between two strings
  * @s1: first string
  * @s2: second string
  * s1_length: length of s1
  * s2_length: length of s2
  * i: counting
  * difference: value of the difference between the two strings
  * Return: return the value of difference
  **/

int _strcmp(char *s1, char *s2)

{
	int s1_length = 0;
	int s2_length = 0;
	int i;
	int difference = 0;

	for (; s1[s1_length] ; s1_length++)
	{
	}
	for (; s2[s2_length] ; s2_length++)
	{
	}
	if (s1_length >= s2_length)
	{

		for (i = 0 ; s1[i] != '\0' ; i++)
		{
			if (s1[i] == s2[i])
			{
			return (0);
			}
			else if (s1[i] > s2[i])
			{
			return (s1[i] - s2[i]);
			}
			else if (s1[i] < s2[i])
			{
			return (s1[i] - s2[i]);
			}
		}
	}
	else if (s1_length < s2_length)
	{
		for (i = 0; s1[i] != s2_length ; i++)
		{
			if (s1[i] == s2[i])
			{
				return (0);
			}
			else if (s1[i] > s2[i])
			{
				return (s1[i] - s2[i]);
			}
			else if (s1[i] < s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
	}


	return (difference);
}
