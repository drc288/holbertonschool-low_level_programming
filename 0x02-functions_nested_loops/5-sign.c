#include "holberton.h"

/**
 * print_sign - detect the number - < 0 < +
 * @n: The character input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
