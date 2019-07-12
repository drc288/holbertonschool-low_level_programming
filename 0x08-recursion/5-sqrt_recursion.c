#include "holberton.h"

/**
 * raiz - Calculed the natural square root of a number
 * @n: the number max
 * @y: counter
 *
 * Return: the natural square root
 */

int raiz(int n, int y)
{
	if ((y * y) == n)
	{
		return (y);
	}
	else if ((y * y) < n)
	{
		return (raiz(n, y + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Recursive for natural square root of n
 *@n: n raiz
 *
 *Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	int y;

	y = 1;
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (raiz(n, y));
	}
}
