#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: input integer
 */
void print_number(int n)
{
	int P10 = 1, num = n;
	int Bool = 1;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	if (num >= 0 && num <= 9)
		_putchar(num + '0');
	while (Bool)
	{
		if (num / (P10 * 10) > 0)
			P10 *= 10;
		else
			Bool = 0;
	}

	while (num >= 10)
	{
		if (P10 == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / P10 % 10) + '0');
			P10 /= 10;
		}
	}
}
