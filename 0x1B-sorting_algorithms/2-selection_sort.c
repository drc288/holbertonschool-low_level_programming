#include "sort.h"

/**
 * selection_sort - is a sorting algorithm, specifically an
 * in-place comparison sort. It has O(n^^2) time complexity
 * @array: the array
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, p_min;
	int tmp1;

	for (i = 0; i < (size - 1); i++)
	{
		p_min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[p_min])
				p_min = j;
		}
		if (p_min != i)
		{
			tmp1 = array[p_min];
			array[p_min] = array[i];
			array[i] = tmp1;
			print_array(array, size);
		}
	}
}
