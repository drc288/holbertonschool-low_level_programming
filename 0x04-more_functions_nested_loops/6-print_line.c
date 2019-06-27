#include "holberton.h"

/**
 * print_line - print 1 space for _
 * @n: line of _
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int down, i;

	down = 95;
	if (n <= 0)
	{
		_putchar(10);
	}
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(down);
		}
		_putchar(10);
	}
}
