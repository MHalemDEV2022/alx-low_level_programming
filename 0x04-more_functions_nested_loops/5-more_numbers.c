#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 *  from 0 to 14, followed by a new line.
 */
void more_numbers(void)
i{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 14; n++)
		{ii
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}

			_putchar((n % 10) + '0');
		}

		_putchar('\n');
	}
}
