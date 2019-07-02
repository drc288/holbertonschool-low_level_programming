#include "holberton.h"

/**
 * swap_int - Exchanges the values of a and b
 * @a: Input data a
 * @b: Input data b
 */

void swap_int(int *a, int *b)
{
	int numA, numB;

	numA = *a;
	numB = *b;

	*a = numB;
	*b = numA;
}
