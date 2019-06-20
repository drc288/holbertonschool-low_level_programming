#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%ln is positive", n);
	}
	else if (n == 0)
	{
		printf("%ln is zero", n);
	}
	else
	{
		printf("%ln is negative");
	}
	return (0);
}
