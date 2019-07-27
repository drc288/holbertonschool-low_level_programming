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

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(li, int));
		if (separator == NULL)
		{
			continue;
		}
		else if (i == (n - 1))
		{
			continue;
		}
		else
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(li);
}
