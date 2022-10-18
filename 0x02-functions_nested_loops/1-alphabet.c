#include "main.h"

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a < 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');

}
