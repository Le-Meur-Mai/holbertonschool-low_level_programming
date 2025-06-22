#include "main.h"
/**
  * times_table- table de multiplication
  *times_table: table de multiplication
  * a: nombre principal de la table
  * b: autre nombre de 1 a 9
  * result: resultat de a * b
  **/



void times_table(void)
{
	int a = 0;
	int b = 0;
	int result = a * b;

	for (a = 0 ; a <= 9 ; a++)
	{
	for (b = 0 ; b <= 9 ; b++)
	{
		result = a * b;
		if (result <= 9 && b != 9)
		{
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
			if ((b + 1) * a < 10)
			{
			_putchar(' ');
			}
		}
		else if (result == 9 || (result < 9 && b == 9))
		{
			_putchar(result + '0');
		}
		else if (b != 9)
		{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
