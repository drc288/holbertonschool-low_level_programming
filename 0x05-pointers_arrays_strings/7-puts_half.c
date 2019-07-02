#include "holberton.h"

/**
 * puts_half - print half of an arrat
 * @str: Input data array
 *
 */

void puts_half(char *str)
{
	int cont, mid;

	cont = _strlen(str);
	mid = cont / 2;
	while (mid < cont)
	{
		_putchar(str[mid]);
		mid++;
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
