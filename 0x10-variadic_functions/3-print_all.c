#include "variadic_functions.h"
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list li;
	int i, tam;
	char *p;

	tam = strlen(format);
	i = 0;
	va_start(li, format);
	while (i < tam)
	{
		if(format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
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
					if (p == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", p);
					break;
			}
			while (i != (tam - 1))
			{
				printf(", ");
				break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(li);
}
