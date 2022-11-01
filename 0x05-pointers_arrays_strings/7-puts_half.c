#include "main.h"
/**
 * puts_half - The function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: nput string
 */

void puts_half(char *str)
{
	int Length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		Length++;

	if (Length % 2 != 0)
	{
		for (i = (Length / 2) + 1; i < Length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = Length / 2; i < Length; i++)
			_putchar(str[i]);
	}

	_putchar('\n');

}
