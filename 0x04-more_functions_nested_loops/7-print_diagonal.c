#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: input the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < y; x++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
}
