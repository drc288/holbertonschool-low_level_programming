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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	else
	{
		return ('\0');
	}
}
