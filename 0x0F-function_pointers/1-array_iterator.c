#include "function_pointers.h"

/**
 * array_iterator - Print array
 * @size: size of array
 * @array: The array
 * @action: Action to print
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
