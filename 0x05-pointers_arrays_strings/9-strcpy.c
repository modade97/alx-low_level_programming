#include "main.h"
/**
 * _strcpy - main function, seems like pointer as well
 * @dest: function parameter
 * @src: function parameter
 * Return: returns dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
