#include "main.h"
/**
 * _strlen - funtions returns the length of a string
 * @s: function parameter also a pointer
 * Return: always 0
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
