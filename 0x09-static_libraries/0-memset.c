#include "main.h"

/**
 * _memset - memset function(fills memory with constant byte)
 * @s: char pointer parameter
 * @b: char parameter
 * @n: unsigned integer parameter
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
