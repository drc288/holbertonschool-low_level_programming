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
		separator = "";
	}

	va_start(li, n);
	for (i = 0; i <= n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(li, int));
			break;
		}
		printf("%d%s", va_arg(li, int), separator);
	}
	va_end(li);
}
