#include "holberton.h"

/**
 * print_array - print array
 * @a: array input
 * @n: array data []
 *
 */

int _atoi(char *s)
{
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
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
