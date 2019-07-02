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

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	return (cont);
}
