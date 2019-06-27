#include "holberton.h"

/**
 * print_diagonal - Put one tables
 * @n: Input table
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int slash, i, j, space;

	space = 32;
	slash = 92;
	if (n <= 0)
	{
		_putchar(10);
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i > 0)
			{
				for (j = i; j > 0; j--)
				{
					_putchar(space);
				}
			}
			_putchar(slash);
			_putchar(10);
		}
	}
}
