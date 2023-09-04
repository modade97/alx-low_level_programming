#include "main.h"

/**
 * str_concat - string concatinate function
 * @s1: First parameter also a pointer
 * @s2: Second parameter also a pointer
 * Return: NULL on failure else s1
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *rtm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	rtm = malloc(sizeof(char) * (len1 + len2) + 1);

	if (rtm == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		rtm[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		rtm[len1 + i] = s2[i];
	return (rtm);
}
