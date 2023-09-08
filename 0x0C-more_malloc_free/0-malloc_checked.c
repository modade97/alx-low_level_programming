#include "main.h"

/**
 * malloc_checked - function allocates memory
 * @b: function parameter
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	else
		return (c);
}
