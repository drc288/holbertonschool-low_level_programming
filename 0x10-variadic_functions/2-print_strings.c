#include "variadic_functions.h"

/**
 * print_strings - Concat the strings
 * @separator: separator in the string
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list li;
	unsigned int i;
	char *p;

	va_start(li, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(li, char*);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(li);
}
