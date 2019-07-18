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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	suma = _strlen(s1) + _strlen(s2);
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
		p = str_concat(s1, s2);
		return (p);
	}
	p = malloc(num1 + (n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= num1; i++)
	{
		p[i] = s1[i];
		if (i == num1)
		{
			for (j = 0; j < n; j++, i++)
			{
				p[i] = s2[j];
			}
		}
	}

	p[i] = '\0';
	return (p);
}
