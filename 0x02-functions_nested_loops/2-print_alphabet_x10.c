#include "holberton.h"

/**
 * print_alphabet_x10 - This is a description
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
