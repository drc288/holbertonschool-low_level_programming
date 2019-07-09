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
	int i;
	char **p;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			p = &haystack;
			for (i = 0; *(needle + i) != '\0'; i++)
			{
				if (*(needle + i) != *(haystack + i))
				{
					break;
				}
				return (*p);
			}
		}
		haystack++;
	}
	return (*p);
}
