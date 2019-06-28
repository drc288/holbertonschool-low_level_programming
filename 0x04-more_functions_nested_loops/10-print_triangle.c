#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: Input data for n * n triangle
 *
 */

void print_triangle(int size)
{
	int i, j, number, space;

	number = 35;
	space = 32;
	if (size <= 0)
	{
		_putchar(10);
	}
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((size  - (i + 1)) > j)
				{
					_putchar(space);
				}
				else
				{
					_putchar(number);
				}
			}
			_putchar(10);
		}
	}
}
