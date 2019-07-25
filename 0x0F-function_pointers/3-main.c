#include "3-calc.h"

/**
 * main - int argv[1] operator [3]
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 if correct. otherwise if fails
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (((*(argv[2]) == '/') || (*(argv[2]) == '%')) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	res = f(a, b);
	printf("%d\n", res);
	return (0);
}
