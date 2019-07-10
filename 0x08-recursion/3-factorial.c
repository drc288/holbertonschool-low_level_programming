#include "holberton.h"

/**
 * factorial - factorial of @n
 * @n: # factorial
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (0 == n)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
