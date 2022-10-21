include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: input integer
 */

void print_number(int n)
{
	long P10;
	int Bool;
	long ItoL;

	ItoL = n;

	if (ItoL < 0)
	{
		ItoL *= -1;
		_putchar('-');
	}

	P10 = 1;
	Bool = 1;

	while (Bool)
	{
		if (ItoL / (P10 * 10) > 0)
			P10 *= 10;
		else
			Boll = 0;
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
