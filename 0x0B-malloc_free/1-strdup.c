#include "main.h"

/**
 * _strdup - function return spointer to newly allocated space in memory
 * @str: function parameter
 * Return: pointer to newly allocated memory space
 */

char *_strdup(char *str)
{
	char *cp;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	cp = malloc(sizeof(char) * count + 1);

	if (cp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cp[i] = str[i];
	return (cp);
}
