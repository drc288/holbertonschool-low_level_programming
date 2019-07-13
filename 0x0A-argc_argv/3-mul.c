#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - mult the 1 to the 3 number
 * @argc: number
 * @argv: Pointer array
 *
 * Return: 0 to success
 */

int main(int argc,char *argv[])
{
	int mul;

	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}

	return (0);
}
