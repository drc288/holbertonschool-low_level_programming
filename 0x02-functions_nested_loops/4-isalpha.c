#include "holberton.h"

/**
 * _isalpha - detect all the charecters in lowercase and ippercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	int let, letUp, data;

	data = 0;
	for (let = 'a'; let <= 'z'; let++)
	{
		if (c == let)
		{
			data = 1;
		}
	}

	for (letUp = 'A'; letUp <= 'Z'; letUp++)
	{
		if (c == letUp)
		{
			data = 1;
		}
	}


	return (data);
}
