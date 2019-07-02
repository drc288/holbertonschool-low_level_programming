#include "holberton.h"

/**
 * puts2 - print array % 2
 * @str: Input data array
 *
 */

void puts2(char *str)
{
	int cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			_putchar(str[cont]);
		}
		cont++;
	}
	_putchar(10);
}
