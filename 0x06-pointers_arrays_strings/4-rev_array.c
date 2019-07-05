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
	int i, k;

	i = 0;
	k = 0;
	n--;
	for (i = 0; i < n; i++, n--)
	{
		if (a[n] == 0)
		{
			k = a[n];
			a[n] = a[i];
			a[i] = k;
			break;
		}

		k = a[n];
		a[n] = a[i];
		a[i] = k;
	}
}
