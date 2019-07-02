#include "holberton.h"

/**
 * puts_half - print half of an arrat
 * @str: Input data array
 *
 */

void puts_half(char *str)
{
	int cont, mid, n;

	cont = _strlen(str);
	if (cont % 2 == 0)
	{
		n = cont / 2;
	}
	else
	{
		n = (cont - 1) / 2;
	}
	mid = cont - n;
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
	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
