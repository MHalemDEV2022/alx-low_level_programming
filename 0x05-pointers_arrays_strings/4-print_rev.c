#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
 *
 * @s:The string to be printed.
 */

void print_rev(char *s)
{
	int Length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		Length++;

	for (i = Length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
