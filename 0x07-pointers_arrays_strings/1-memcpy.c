#include "holberton.h"

/**
  * _memcpy - copy src in dest
  *@dest: dest array
  *@src: src array
  *@n: n charecters the src to dest
  *
  *Return: char *dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
