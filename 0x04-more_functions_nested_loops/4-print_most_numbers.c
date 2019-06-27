#include "holberton.h"

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		if (num == 50 || num == 52)
		{
			num++;
		}
		_putchar(num);
		num++;
	}
	_putchar(10);
}
