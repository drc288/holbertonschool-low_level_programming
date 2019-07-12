#include "holberton.h"

/**
 * _strspn - Prints the number of repeated characters in a block
 * @s: Input Array
 * @accept: charecters accept
 *
 * Return: the characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ui;
	int i;

	ui = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				ui++;
				break;
			}
			if (accept[i + 1] == '\0')
			{
				return (ui);
			}
		}
		s++;
	}
	return (ui);
}
