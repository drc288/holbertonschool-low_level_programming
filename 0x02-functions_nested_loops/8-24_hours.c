#include "holberton.h"

/**
 * jack_bauer - print 24 hours
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int i, j, q, k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (q = 0; q <= 5; q++)
			{
				for (k = 0; k <= 9; k++)
				{
					_putchar(i % 10 + '0');
					_putchar(j % 10 + '0');
					_putchar(58);
					_putchar(q % 10 + '0');
					_putchar(k % 10 + '0');
					_putchar(10);
				}
			}

			if ((i == 2) && (j < k))
			{
				break;
			}
		}
	}
}
