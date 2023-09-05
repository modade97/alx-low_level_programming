#include "main.h"

/**
 * _strncpy - string copy function
 * @dest: function parameter
 * @src: function parameter
 * @n: function parameter
 * Return: always returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
