#include "main.h"

/**
 * _strncat - String concatinating function
 * @dest: function parameter
 * @src: function parameter
 * @n: function integer parameter
 * Return: returns dest parameter(argument)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
