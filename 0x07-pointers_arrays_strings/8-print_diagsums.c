#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of size
 * @a: pointer
 * @size: size of the pointer
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + i - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
