#include "main.h"

/**
 * _calloc - function allocates memory for an array.
 * @nmemb: numbers of element
 * @size: size of array
 * Return: nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
