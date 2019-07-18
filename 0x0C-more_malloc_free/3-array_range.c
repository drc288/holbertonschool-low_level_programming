#include "holberton.h"

/**
 * array_range - print array of numbers
 * @min: min integers
 * @max: max integers
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int i, j, min2;
	int *p;

	min2 = min;
	if (min > max)
	{
		return (NULL);
	}

	for (i = 0; min2 <= max; i++, min2++)
	{
	}

	p = malloc(sizeof(int) * i);
	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; min <= max; j++, min++)
	{
		p[j] = min;
	}

	return (p);
}
