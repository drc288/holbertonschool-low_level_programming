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
	int i, j;
	char c;

	ui = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		c = accept[j];
		for (i = 0; s[i] != 44; i++)
		{
			if (s[i] == c)
			{
				ui++;
			}
		}
	}
	return (ui);
}
