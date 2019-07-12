#include "holberton.h"

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
 * _palindrome - get de palindrome char
 *@s: char
 *@i: max caracters of char
 *
 * Return: 1 if the @s is palindrome
 */

int _palindrome(char *s, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (*s != s[i - 1])
	{
		return (0);
	}
	else
	{
		return (_palindrome(s + 1, i - 2));
	}
}


/**
 * is_polindrome - Get polindrome
 *@s: charectes
 *
 *Return: the natural square root
 */

int is_polindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 0)
	{
		return (1);
	}
	else
	{
		return (_palindrome(s, i));
	}
}
