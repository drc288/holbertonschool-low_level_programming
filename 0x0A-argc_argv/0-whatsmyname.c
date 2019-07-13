#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the file name
 * @argc: number
 * @argv: Pointer array
 *
 * Return: 0 to success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
