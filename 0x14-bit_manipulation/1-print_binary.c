#include "holberton.h"

/**
 * print_binary - print binary of n
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n >> i)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		num = n >> j;
		if (num & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
