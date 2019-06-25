#include "holberton.h"

/**
 * print_sign - This is a description
 */

int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar(43);
	}
	else if (n < 0)
	{
		a = -1;
		_putchar(45);
	}
	else
	{
		a = 0;
		_putchar(48);
	}
	return (a);
}
