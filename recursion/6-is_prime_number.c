#include "main.h"

/**
  *
  *
  *
  *
  *
  **/

int is_prime_number(int n)

{
	if (n != 2 && n % 2 == 0)
	{
		return (0);
	}
	else if (n < 0 || n == 9 || n == 1)
	{
		return (0);
	}
	else if (n != 5 && n % 5 == 0)
	{
		return (0);
	}
	return (1);
}
