#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main()
{
	int alf;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		if ((alf != 'e') && (alf != 'q'))
		{
			putchar(alf);
		}
	}
	putchar('\n');
	return (0);
}
