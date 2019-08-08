#include "holberton.h"

/**
 * print_binary - print binary of n
 * @n: integer
 */

void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 0x01);
	_putchar((n & 0x01) + '0');
}
