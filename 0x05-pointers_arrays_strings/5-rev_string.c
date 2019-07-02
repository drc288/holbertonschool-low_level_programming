#include "holberton.h"

/**
 * print_rev - print a array charecters reverse
 * @s: Input data array
 *
 */

void rev_string(char *s)
{
	int i, cont, a;

	a = 0;
	cont = _strlen(s);
	for (i = cont; i >= a; i--)
	{
		
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
