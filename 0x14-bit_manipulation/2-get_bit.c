#include "holberton.h"

/**
 * get_bit - get bit en position index
 * @n: integer
 * @index: index of the bit
 *
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);

	else
		return (0);
}
