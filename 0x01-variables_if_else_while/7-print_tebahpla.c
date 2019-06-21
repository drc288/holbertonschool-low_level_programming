#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int alf;

	for (alf = 'z'; alf >= 'a'; alf--)
	{
		putchar(alf);
	}
	putchar('\n');
	return (0);
}
