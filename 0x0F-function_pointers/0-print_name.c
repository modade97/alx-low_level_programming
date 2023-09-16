#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: function parameter
 * @f: function parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
