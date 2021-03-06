#include "holberton.h"

/**
 * times_table - print 9 * 9
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_times_table(int n)
{
	int i, j, a;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			a = i * j;
			if (a <= n)
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(a + '0');
			}
			else if (a > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar(10);
	}
}
