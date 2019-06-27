#include "holberton.h"

/**
 * more_numbers - print number from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;

	i = 0;
	while (i <= 14)
	{
		if (i > 9)
		{
			_putchar(i / 10 + '0');
		}
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar(10);
}
