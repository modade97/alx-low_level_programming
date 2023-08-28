#include "main.h"

/**
 * _memcpy - memory copy function
 * @dest: destination pointer parameter
 * @src: source pointer parameter
 * @n: unsigned integer parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
