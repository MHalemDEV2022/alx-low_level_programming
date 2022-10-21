#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * prints the numbers from 1 to 100
 *
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");

		else if (i % 5 == 0)
			printf("Buzz ");

		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");

		else
			printf("%d ", i);
	}

	return (0);
}
