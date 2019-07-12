#include "holberton.h"

/**
  * _strstr - Locate a substring
  *@haystack: pointer to char
  *@needle: pointer to char
  *
  *Return: char in substring
  */

char *_strstr(char *haystack, char *needle)
{
	int n, i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		n = i;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + n);
		}
		i = n + 1;
	}
	return ('\0');
}
