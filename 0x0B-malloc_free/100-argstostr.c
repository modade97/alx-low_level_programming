#include "main.h"

/**
 * argstostr - Function concatenates all argyments in program
 * @ac: function parameter
 * @av: function parameter
 * Return: NULL if fail | else pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int count = 0;
	char *rtm;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		j = 0;
		count++;
	}
	rtm = malloc(sizeof(char) * count + 1);
	if (rtm == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			rtm[k] = av[i][j];
			k++;
		}
		rtm[k++] = '\n';
	}
	rtm[k] = '\0';
	return (rtm);
}
