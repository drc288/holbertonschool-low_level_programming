#include "holberton.h"

/**
 * _isupper - print is upper te value
 * @c: Input value
 *
 * Return: On success 1 is uppercase if not, return 0.
 */

int _isupper(int c)
{
	int i, ret;

	ret = 0;
	for (i = 'a'; i < 'z'; i++)
	{
		if (c == i)
		{
			ret = 1;
		}
	}

	return (ret);
}
