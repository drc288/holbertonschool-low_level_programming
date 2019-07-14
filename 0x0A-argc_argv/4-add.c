#include "holberton.h"
#include <stdlib.h>

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

	j = 0;
	add = 0;
	for (i = 1; i < argc; i++)
	{
		while (*(*(argv + i) + j) != '\0')
		{
			if (*(*(argv + i) + j) < '0' || *(*(argv + i) + j) > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
