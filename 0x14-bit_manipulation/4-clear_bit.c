#include "holberton.h"

/**
 * clear_bit - clean a bit
 * @n: integer
 * @index: value to clean
 *
 * Return: 1 if it worked or -1 if an error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
