#include "holberton.h"

/**
 * string_toupper - Upercase the array of char
 * @p: int array char
 *
 * Return: p
 */

char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}