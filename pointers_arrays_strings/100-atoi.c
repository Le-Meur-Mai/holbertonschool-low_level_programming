#include "main.h"
/**
  * _atoi- print the numerical value of a string
  * _atoi: print the numerical value of a string
  * @s: The string in question
  * i: counting
  * operator: determine if the number is positive or negative
  * numbers: the numbers of the numerical value of the string is here
  * Return: the numerical value of a string
  **/

int _atoi(char *s)

{
	int i;
	int operator = 0;
	int numbers = 0;

	for (i = 0; s[i] && !(s[i] >= '0' && s[i] <= '9') ; i++)
	{
		if (s[i] == '-')
		{
			operator++;
		}
	}

	for (; s[i] >= '0' && s[i] <= '9' ; i++)
	{
		numbers = (numbers * 10) + (s[i] - '0');
	}
	if ((operator % 2) != 0)
	{
		numbers = -1 * numbers;
	}
	return (numbers);
}
