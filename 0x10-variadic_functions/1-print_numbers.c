#include "variadic_functions.h"

/**
 * print_numbers - Print the numbers of n
 * @separator: String of separator "n""separator""n"
 * @n: n integer to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(li, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(li, int), separator);
	}
	i++;
	printf("%d\n", va_arg(li, int));
}