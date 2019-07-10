#include "holberton.h"

/**
 * _print_rev_recursion - print the reverse charecter @s
 * @s: char caracteres
 *
 * Return: the characters
 */

void _print_rev_recursion(char *s)
{
	char t;

	t = *s;
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
	}
	_putchar(t);
}
