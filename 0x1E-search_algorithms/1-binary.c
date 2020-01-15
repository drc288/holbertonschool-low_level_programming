#include "search_algos.h"

/**
 * binary_search - using the binary search to get a data
 * @array: array to get the data
 * @size: the size of the array
 * @value: value to search
 * Return: return the index of the data or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t i;
	int midle = 0;

	if (!array)
		return (-1);
	while (left <= right)
	{
		midle = (int)(left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%i", array[i]);
			if (i == right)
				putchar(10);
			else
				printf(", ");
		}
		if (array[midle] < value)
		{
			left = midle + 1;
		}
		else if (array[midle] > value)
		{
			right = midle - 1;
		}
		else
		{
			return (midle);
		}
	}
	return (-1);
}
