#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: input integer
 */
void print_number(int n)
{
	int P10 = 1, ItoL = n;
	int Bool = 1;

	if (ItoL < 0)
	{
		ItoL *= -1;
		_putchar('-');
	}
       
	if ( ItoL >= 0 && ItoL <= 9)
		_putchar(ItoL + '0');
	while (Bool)
	{
		if (ItoL / (P10 * 10) > 0)
			P10 *= 10;
		else
			Bool = 0;
	}

	while (ItoL >= 10)
	{
		if (P10 == 1)
		{
			_putchar(ItoL % 10 + '0');
			ItoL = -1;
		}
		else
		{
			_putchar((ItoL / P10 % 10) + '0');
			P10 /= 10;
		}
	}
}
