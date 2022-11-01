#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 *
 * @a: input pointer of an array
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int num;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			printf("%d", a[num]);

			if (num < n - 1)
				printf(", ");
		}
	}

	printf("\n");
}
