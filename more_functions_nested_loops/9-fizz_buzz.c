#include <stdio.h>

/**
  * main- An Holberton exercise
  * nb: numbers
  * main: start of the program, print 1 to 100 with Fizz and Buzz
  * Return: int
  **/

int main(void)

{
	int nb;

	for (nb = 1 ; nb <= 100 ; nb++)
	{
		if ((nb % 3) == 0 && (nb % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((nb % 5) == 0 && nb != 100)
		{
			printf("Buzz ");
		}
		else if ((nb % 3) == 0)
		{
			printf("Fizz ");
		}
		else if (nb == 100)
		{
			printf("Buzz");
		}
		else
		{
		printf("%d ", nb);
		}
	}
	putchar('\n');
	return (0);
}
