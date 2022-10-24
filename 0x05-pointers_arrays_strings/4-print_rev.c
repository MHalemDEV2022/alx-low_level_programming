#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s:The string to be printed.
 */

void print_rev(char *s)
{
	int Length = 0, text;

	while (s[text++])
		Length++;

	for (text = Length - 1; text >= 0; text--)
		_putchar(s[text]);

	_putchar('\n');
}
