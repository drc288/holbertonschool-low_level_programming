#include "holberton.h"

/**
 * _strlen_recursion - print # charecters
 * @s: char caracteres
 *
 * Return: # the charecters whit @s
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(mult, y - 1));
	}
}
