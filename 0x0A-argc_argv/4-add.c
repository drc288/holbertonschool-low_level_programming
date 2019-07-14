#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return 1 if thestrings have the number one
 * @argc: number
 * @argv: Pointer array
 *
 * Return: 0 to success
 */


int main(int argc, char *argv[])
{
	int i, j, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (isdigit(*(*(argv + i) + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(*(argv + i));
	}
	printf("%d\n", add);
	return (add);
}
