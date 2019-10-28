#include "sort.h"

/**
 * bubble_sort - is a simple sorting algorithm that
 * repeatedly steps through the list
 * @array: array of integers
 * @size: size of array
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp1;

	for (j = 0; j <= size; j++)
	{
		for (i = 1; i <= (size - 1); i++)
		{
			if (array[i - 1] > array[i])
			{
				tmp1 = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp1;
				print_array(array, size);
			}
		}
	}
}
