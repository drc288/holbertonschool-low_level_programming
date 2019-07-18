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
	unsigned int i;
	char *p;

	i = 0;
	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb + 1);
	if (p == NULL)
	{
		return (NULL);
	}

	while (i < nmemb)
	{
		p[i] = 0;
		i++;
	}

	p[i] = '\0';
	return (p);
}
