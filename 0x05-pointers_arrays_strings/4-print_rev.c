#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s:The string to be printed.
 */

void print_rev(char *s)
{
	int Length = 0, rev;

	while (*s++)
		Length++;

	for (rev= Length - 1; rev >= 0; rev--)
		_putchar(*s);

	_putchar('\n');
}
