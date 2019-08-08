#include "holberton.h"

/**
 * binary_to_uint - COnvert binary to decimal
 * @b: binary
 *
 * Return: the number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int cont = 0, p;

	if (b == NULL)
	{
		return ('\0');
	}

	while (b[cont + 1] != '\0')
	{
		cont++;
	}

	p = 1;
	while (cont >= 0)
	{
		if (b[cont] != 48 && b[cont] != 49)
		{
			return (0);
		}
		n += (b[cont] - '0') * p;
		p *= 2;
		cont--;
	}

	return (n);
}
