#include "holberton.h"

/**
  * _strpbrk - print the first charecter in array to the end
  *@s: The array
  *@accept: Accepts
  *
  *Return: char p whit address of &s[i]
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			if (s[i + 1] == '\0')
			{
				return ('\0');
			}
		}
	}
	return (0);
}
