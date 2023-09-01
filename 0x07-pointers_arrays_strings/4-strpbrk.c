#include "main.h"

/**
 * _strpbrk - function
 * @s: function parameter also a pointer
 * @accept: function parameter also a pointer
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
