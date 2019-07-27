#include "variadic_functions.h"

/**
 * print_all - Pirnt all caracter according tosign
 * @format: Format
 * @...: the signs
 */

void print_all(const char * const format, ...)
{
	va_list li;
	int i = 0;
	char *p;

	va_start(li, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(li, int));
				break;
			case 'i':
				printf("%d", va_arg(li, int));
				break;
			case 'f':
				printf("%f", va_arg(li, double));
				break;
			case 's':
				p = va_arg(li, char*);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
				format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(li);
}
