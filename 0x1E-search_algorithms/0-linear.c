#include "search_algos.h"

/**
 * linear_search - If each element is equally likely to be
 * searched, then linear search has an average case of n/2
 * @array: array to search the element
 * @size: size of the array
 * @value: value to search in the array
 *
 * Return: the index of the data or -1 if not
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
