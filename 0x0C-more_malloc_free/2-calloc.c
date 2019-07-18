#include "holberton.h"

/**
 * _calloc - add in array of nmemb charecters and the size
 * @nmemb: #of array
 * @size: size of charecter
 *
 * Return: *pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, math;
	char *p;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	math = nmemb * size;
	p = malloc(math);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < math; i++)
	{
		p[i] = 0;
	}

	return (p);
}
