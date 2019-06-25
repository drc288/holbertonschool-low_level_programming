#include "holberton.h"

/**
 * jack_bauer - print 24 hours
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i % 10 + '0');

		for (j = 0; j <= 9; j++)
		{
			_putchar(i % 10 + '0');
		}

		_putchar(10);
	}
}
