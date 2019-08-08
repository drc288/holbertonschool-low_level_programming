#include "holberton.h"

/**
 * print_binary - print binary of n
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	int i = 0, num;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n >> i)
	{
		i++;
	}

	i -= 1;
	for (; i >= 0; i--)
	{
		num = n >> i;
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
