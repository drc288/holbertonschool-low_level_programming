#include "holberton.h"

/**
 * _strlen - Count the maximum number of a array
 * @s: Input Array
 *
 * Return: counter
 */

int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	return (cont);
}

/**
 * string_nconcat - concat in s1 n charecters of s2
 * @s1: String 1
 * @s2: String 2
 * @n: # charecters to copy a s1
 *
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num1, num2, n1, i, j;
	char *p;

	num1 = _strlen(s1);
	num2 = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= num2)
	{
		p = malloc(sizeof(char) * (num1 + num2) + 1);
	}
	else
	{
		p = malloc((num1 + n) + 1);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	n1 = 0;
	j = num1 + n;
	for (; i < j; i++)
	{
		p[i] = s2[n1];
		n1++;
	}

	p[i] = '\0';
	return (p);
}
