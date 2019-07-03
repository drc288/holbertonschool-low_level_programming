#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print array
 * @a: array input
 * @n: array data []
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar(10);
}
