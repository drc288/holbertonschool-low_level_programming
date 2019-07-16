#include <stdlib.h>

/**
 * create_array - create array using malloc
 * @size: size of array
 * @c: charecter
 *
 * Return: *pointer with array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	i = 0;
	p = malloc(sizeof(char) * size);
	if (!p)
	{
		return ('\0');
	}
	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		while (i <= size)
		{
			p[i] = c;
			i++;
		}
		return (p);
	}
}
