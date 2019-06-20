#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int alf, alfUp;

	for (alf = 'a'; alf <= 'z'; alf++)
	{
		putchar(alf);
		alfUp = alf;
		if (alfUp == 'z')
		{
			for (alfUp = 'A'; alfUp <= 'Z'; alfUp++)
			{
				putchar(alfUp);
			}
		}
	}
	putchar('\n');
	return (0);
}
