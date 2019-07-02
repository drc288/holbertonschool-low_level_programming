#include "holberton.h"

/**
 * _puts - print a array charecters
 * @str: Input data array
 *
 */

void _puts(char *str)
{
	int i, count;

	count = _strlen(str);
	for (i = 0; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
