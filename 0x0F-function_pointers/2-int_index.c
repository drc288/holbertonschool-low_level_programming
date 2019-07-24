#include "function_pointers.h"

/**
 * int_index - print the position of cmp
 * @array: The array
 * @size: Size if array
 * @cmp: find the number
 *
 * Return: position
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	index = 0;
	i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (index);
		}
		index++;
		i++;
	}

	return (0);
}
