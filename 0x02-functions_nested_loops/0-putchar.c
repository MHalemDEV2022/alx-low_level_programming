#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	char a[] = "_putchar\n";

	int i;
	int size = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < size - 1; i++)
	{
		_putchar(a[i]);
	}

	return (0);
}
