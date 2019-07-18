#include "holberton.h"

/**
 * malloc_checked - Check the # of b and create whit malloc a pointer
 * @b: size of pointer
 *
 * Return: *pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(*p) * b);

	if (p == NULL)
	{
		exit(98);
	}
	else
	{
		return (p);
	}
}
