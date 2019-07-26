#include "variadic_functions.h"

/**
 * sum_them_all - Sum all parameter in n
 * @n: Number to sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list li;
	unsigned int sum, i;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(li, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(li, int);
	}
	va_end(li);

	return (sum);

}
