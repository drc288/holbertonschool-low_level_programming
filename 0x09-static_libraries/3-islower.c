#include "holberton.h"

/**
 * _islower - detect all the charecters in lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
{
	int let, a;

	a = 0;
	for (let = 'a'; let <= 'z'; let++)
	{
		if (c == let)
		{
			a = 1;
		}
	}
	return (a);
}
