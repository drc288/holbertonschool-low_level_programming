#include "holberton.h"

/**
  * _memset - set value in n array
  *@s: Pointer or buffer
  *@b: charecter to change
  *@n: number in total array changes
  *
  *Return: char *s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
