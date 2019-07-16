#include <stdlib.h>

/**
 * _strlen_recursion - print # charecters
 * @s: char caracteres
 *
 * Return: # the charecters whit @s
 */

int _strlen_recursion(char *s)
{
	int n;

	n = 0;
	if (*s != '\0')
	{
		n++;
		s++;
		return (n + _strlen_recursion(s));
	}
	else
	{
		return (0);
	}
}

/**
 * _strdup - duplicate a array of char
 * @str: char to copy
 *
 * Return: *pointer copy of str
 */

char *_strdup(char *str)
{
	int numChar, i;
	char *p;

	numChar = _strlen_recursion(str) + 1;
	p = malloc(sizeof(char) * numChar);
	i = 0;
	if (!p)
	{
		return ('\0');
	}
	if (str == '\0')
	{
		free(p);
		return ('\0');
	}
	else
	{
		while (i <= numChar)
		{
			p[i] = *str;
			str++;
			i++;
		}
		return (p);
	}
}
