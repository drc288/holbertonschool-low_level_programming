#include "holberton.h"

/**
 * _strncat - print pointer up to n charecter
 * @dest: Input data array 1
 * @src: Input data array #n charecters
 * @n: Input # data of array @src
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}

	return (dest);
}
