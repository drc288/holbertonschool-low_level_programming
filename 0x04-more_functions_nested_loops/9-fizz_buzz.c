#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int i, mod5, mod3;

	for (i = 1; i <= 100; i++)
	{
		mod3 = i % 3;
		mod5 = i % 5;
		if ((mod3 == 0) && (mod5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (mod3 == 0)
		{
			printf("Fizz ");
		}
		else if (mod5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar(10);
	return (0);
}
