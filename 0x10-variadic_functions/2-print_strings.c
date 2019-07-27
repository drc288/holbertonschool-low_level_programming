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

	if (separator == NULL)
	{
		return;
	}

	va_start(li, n);
	for (i = 0; i < (n - 1); i++)
	{
		p = va_arg(li, char*);
		if (p == NULL)
		{
			printf("(nil)");
		}
		printf("%s%s", p, separator);
	}
	i++;
	p = va_arg(li, char*);
	printf("%s\n", p);
	va_end(li);
}
