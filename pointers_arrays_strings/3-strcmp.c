#include "main.h"
/**
  *
  *
  *
  *
  *
  **/

int _strcmp(char *s1, char *s2)

{
	int i;
	int difference = 0;

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
	return (difference);
}
