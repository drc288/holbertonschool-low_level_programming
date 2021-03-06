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

	if (str == NULL)
	{
		return (NULL);
	}
	numChar = _strlen_recursion(str) + 1;
	p = malloc(numChar);
	i = 0;
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < numChar)
	{
		p[i] = *str;
		str++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
