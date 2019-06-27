#include "holberton.h"

/**
 * print_numbers - print from 0 to 9
 *
 */

void print_numbers(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar(10);
}
