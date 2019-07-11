#include "holberton.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer
 *
 * Return: Nothing (void)
 */

void print_chessboard(char (*a)[8])
{
	int i;

	j = 0;
	for (i = 0; i < 8; i++)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		j = 0;
		_putchar(10);
	}
}
