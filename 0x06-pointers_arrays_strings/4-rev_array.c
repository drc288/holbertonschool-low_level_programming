#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a: int array
 * @n: # of array
 *
 * Return: dest
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;
	n--;
	while (i <= n)
	{
		if (a[n] == 0)
		{
			printf("%d\n", a[n]);
			break;
		}
		printf("%d, ", a[n]);
		n--;
	}
}
