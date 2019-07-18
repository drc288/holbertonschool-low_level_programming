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
	unsigned int num1, num2, i, j;
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
		n = num2;
	}
	p = malloc(sizeof(char) * (num1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		p[num1] = s2[j];
		num1++;
	}
	p[num1] = '\0';
	return (p);
}
