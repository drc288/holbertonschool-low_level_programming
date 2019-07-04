#include "holberton.h"

/**
 * _strncpy - copy n charecters in dest
 * @dest: Input data array 1
 * @src: Input data array #n charecters
 * @n: Input # data of array @src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char l;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (i < n)
		{
			l = src[i];
			dest[i] = l;
		}
	}
	return (dest);
}
