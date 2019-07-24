#include "function_pointers.h"

/**
 * print_name - Print the name
 * @name: name parameter
 * @f: function toprint the name
 *
 * Return: Pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}
