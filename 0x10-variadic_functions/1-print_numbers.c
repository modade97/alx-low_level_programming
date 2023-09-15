#include "variadic_functions.h"

/**
 * print_numbers - prints string followed by a new line
 * @separator: function parameter
 * @n: function parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
