#include "holberton.h"

/**
 * print_square - print numeral table
 * @size: Input data of print numeral
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_square(int size)
{
	int i, j, numeral;

	numeral = 35;
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
				_putchar(numeral);
			}
			_putchar(10);
		}
	}
}
