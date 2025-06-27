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
	int difference;

	for (i = 0 ; s1[i] ; i++)
	{
		if (s1[i] == s2[i])
		{
			difference = difference + '0';
		}
		else if (s1[i] != s2[i] && s1[i] > s2[i])
		{
			difference = difference - '1';
		}
		else if (s1[i] != s2[i] && s1[i] < s2[i])
		{
			difference = difference + '1';
		}
	}
	return (difference);
}
