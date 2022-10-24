#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s:The string to be printed.
 */

void print_rev(char *s)
{
	int Length = 0, index;
i
	while (s[index++])
		Length++;

	for (index = Length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
