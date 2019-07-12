#include "holberton.h"

/**
 * _abs - print the absolute value
 * @n: The character input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
{
	int a;

	if (n >= 0)
	{
		a = n;
	}
	else if (n < 0)
	{
		a = n * -1;
	}
	return (a);
}
