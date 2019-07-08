#include "holberton.h"

/**
  * _strchr - Print array to charecter
  *@s: Array
  *@c: charecter to print
  *
  *Return: char changed
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				p = &s;
				return (p);
			}
			if (accept[i + 1] == '\0')
			{
				return (0);
			}
		}
		s++;
	}
	return (p);
}
