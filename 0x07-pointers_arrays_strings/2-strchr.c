#include "holberton.h"

/**
  * _strchr - Print array to charecter
  *@s: Array
  *@c: charecter to print
  *
  *Return: char changed
  */

char *_strchr(char *s, char c)
{
	int i;
	char *a;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			a = &s[i];
			return (a);
		}
	}
	return (0);
}

