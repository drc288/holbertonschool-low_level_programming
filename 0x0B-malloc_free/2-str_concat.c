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
	int numA, numB, suma, i, j;
	char *p;

	if (*s1 == '\0' || *s2 == '\0')
	{
		return (NULL);
	}

	numA = _strlen_recursion(s1);
	numB = _strlen_recursion(s2) + 1;

	suma = numA + numB;
	p = malloc(suma);

	i = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';
	return (p);
}
