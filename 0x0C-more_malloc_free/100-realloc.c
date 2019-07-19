#include "holberton.h"

/**
 * _realloc - Realloc a pointer
 * @ptr: The array
 * @old_size: Old siz
 * @new_size: New size
 *
 * Return: A pointer.
 * On error, retunr NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (p);
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p[i] = *((char *)ptr + i);
		}
		free(ptr);
		p[i] = '\0';
	}
	else
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = *((char *)ptr + i);
		}
	}
	free(ptr);
	return (p);
}
