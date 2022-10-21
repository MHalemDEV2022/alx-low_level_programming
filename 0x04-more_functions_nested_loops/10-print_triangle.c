#include "main.h"

/**
 * print_triangle -unction that prints a triangle, followed by a new line.
 * @size: input the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (y = size; y > 0; y--)
		{
			for (x = 0; x <= size; x++)
			{
				if (x >= y)
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
	
}

