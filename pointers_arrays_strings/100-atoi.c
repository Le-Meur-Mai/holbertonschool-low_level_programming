#include "main.h"
/**
  *
  *
  *
  *
  *
  *
  *
  **/

int _atoi(char *s)

{
	int i;
	int operator = 0;
	int numbers;

	for (i = 0; s[i] && s[i] >= 0 && s[i] <= 9 ; i++)
	{
		if (s[i] == '-')
		{
			operator++;
		}
	}

	numbers = 0;

	for (; s[i] >= 0 && s[i] <= 9 ; i++)
	{
		numbers = (numbers * 10) + (s[i] - 0);
	}
	if ((operator % 2) != 0)
	{
		numbers = -1 * numbers;
	}
	return (numbers);
}
