#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *c = "Holberton";
	int i;

	for (i = 0; i <= (sizeof(c)); i++)
	{
		_putchar(c[i]);
	}
	_putchar(10);
	return (0);
}
