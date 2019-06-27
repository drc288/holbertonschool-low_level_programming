#include "holberton.h"

/**
 * _isdigit - detect if the charecter is digit or number
 * @c: Value Input
 *
 * Return: return 1 is a digit or retirn 0 is a number
 */

int _isdigit(int c)
{
	int i, ret;

	ret = 0;
	for (i = 48; i <= 57; i++)
	{
		if (c == i)
		{
			ret = 1;
		}
	}
	return (ret);
}
