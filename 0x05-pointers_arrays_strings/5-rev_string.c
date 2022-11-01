#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: input string
 */

void rev_string(char *s)
{
	int Length = 0;
	int rev = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		Length++;

	for (i = 0; i < Length; i++)
	{
		rev = s[i];
		s[i] = s[Length - 1];
		s[Length - 1] = rev;
		Length--;
	}
}


