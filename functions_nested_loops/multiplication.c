#include <stdio.h>
#include "main.h"

/**
  * -multiply
  * test
  **/
void multiply(int a, int b)

{
	 int result = a * b;

	for (b = '0' ; b <= '9' ; b++)
	{
		printf("%d", result);
	}
	_putchar('\n');
}
