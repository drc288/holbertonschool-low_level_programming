#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the argv position
 * @argc: number
 * @argv: Pointer array
 *
 * Return: 0 to success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
