#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of arguments
 * @argc: number
 * @argv: Pointer array
 *
 * Return: 0 to success
 */

int main(int argc, char *argv[])
{
	if(*argv)
	{
		printf("%d\n", (argc - 1));
	}
	return (0);
}
