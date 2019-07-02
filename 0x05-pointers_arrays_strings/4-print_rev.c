#include "holberton.h"

/**
 * print_rev - print a array charecters reverse
 * @s: Input data array
 *
 */

void print_rev(char *s)
{
	int i, count;

	count = _strlen(s) - 1;
	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
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
