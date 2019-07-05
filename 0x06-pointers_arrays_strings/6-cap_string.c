#include "holberton.h"
/**
  * cap_string - Capitalizes all words of a string
  *@p: string change
  *
  *Return: char changed
  */
char *cap_string(char *p)
{
	int i;

	if ((p[0] >= 'a') && (p[0] <= 'z'))
	{
		p[0] = p[0] - 32;
	}
	for (i = 1; p[i] != '\0'; i++)
	{
		if ((p[i - 1] == ' ' || p[i - 1] == '\t'
					|| p[i - 1] == '\n' || p[i - 1] == ','
			|| p[i - 1] == ';' || p[i - 1] == '.' || p[i - 1] == '!' || p[i - 1] == '?'
			|| p[i - 1] == '"' || p[i - 1] == '(' || p[i - 1] == ')' || p[i - 1] == '{'
			|| p[i - 1] == '}') && (p[i] > 'a' && p[i] < 'z'))
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
