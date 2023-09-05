#include "main.h"

/**
 * _strchr - function locates and returns a character from a string
 * @s: pointer parameter
 * @c: parameter to check against the string
 * Return: three reutrns. 1. pointer value 2. null 3. 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;

		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
