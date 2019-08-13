#include "holberton.h"
/**
 *set_bit - set to 1 bit to index in number n
 *@n: value
 *@index: index starting from 0
 *
 *Return: 1 if it worked of -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	set = 1 << index;
	*n = *n | set;
	return (1);

}
