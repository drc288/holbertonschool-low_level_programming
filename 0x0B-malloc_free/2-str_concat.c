#include <stdlib.h>
#include <stdio.h>

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
 * str_concat - concat arrays
 * @s1: array 1
 * @s2: array 2
 *
 * Return: *pointer with array
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int suma, i, j, n1;
	char *p;

	if (*s1 == '\0')
	{
		s1 = "";
	}
	if (*s2 == '\0')
	{
		s2 = "";
	}

	suma = _strlen_recursion(s1) + _strlen_recursion(s2);
	p = malloc(suma + 1);
	n1 = 0;

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (j = i; s2[n1] != '\0'; j++)
	{
		p[j] = s2[n1];
		n1++;
	}
	p[j] = '\0';
	return (p);
}
