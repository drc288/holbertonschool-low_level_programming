#include "holberton.h"

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: data
 */

int _strlen(char *s)
{
	int i, cont;

	cont = 0;
	for (i = 0; i < s[i] ; i++)
	{
		cont++;
	}
	return (cont);
}
