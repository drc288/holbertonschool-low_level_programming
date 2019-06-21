#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int num, let;

	for (num = 0; num <= 9; num++)
	{
		putchar(num % 10 + '0');
		let = num;
		if (let == 9)
		{
			for (let = 'a'; let <= 'f'; let++)
			{
				putchar(let);
			}
		}
	}
	putchar('\n');
	return (0);
}
