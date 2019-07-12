#include "holberton.h"

/**
<<<<<<< HEAD
 * _strlen_recursion - print # charecters
 * @s: char caracteres
 *
 * Return: # the charecters whit @s
=======
 * _pow_recursion - elevated function
 *@x: x
 *@y: y
 *
 *Return: return the x elevated y
>>>>>>> 9e5b44ff276df0171904cc9b2deef7208c7bc6df
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
<<<<<<< HEAD
		return (x * _pow_recursion(mult, y - 1));
	}
=======
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
>>>>>>> 9e5b44ff276df0171904cc9b2deef7208c7bc6df
}
