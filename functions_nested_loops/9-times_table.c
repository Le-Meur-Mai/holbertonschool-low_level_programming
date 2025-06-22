#include "main.h"




void times_table(void)
{
	int a = 0;
	int b = 0;
	int result = a * b;
	int fin_result;
	int debut_result;

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
			if ( (b + 1) * a < 10)
			{
			_putchar(' ');
			}
		}
		else if (b != 9)
		{
			debut_result = result / 10;
			fin_result = result % 10;
		_putchar(debut_result + '0');
		_putchar(fin_result + '0');
		_putchar(',');
		_putchar(' ');
		}
		else if (result ==9 || (result < 9 && b == 9))
		{
			_putchar(result + '0');
		}
		else
		{
			debut_result = result / 10;
			fin_result = result % 10;
			_putchar(debut_result + '0');
			_putchar(fin_result + '0');
		}
	}
	_putchar('\n');
	}
}
