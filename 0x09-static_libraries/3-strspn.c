#include "main.h"

/**
 * _strspn - function gets the length of a prefix substring
 * @s: function parameter also a pointer
 * @accept: function parameter also a pointer
 * Return: the number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
