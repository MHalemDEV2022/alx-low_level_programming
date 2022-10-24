#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: The string to get the length of.
 *
 * Return: The length of @n
 */

int _strlen(char *s)
{
	int Length = 0;

	while (*s++)
		Length++;

	return (Length);
}
