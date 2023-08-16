#include "main.h"
/**
 * _islower - function returns lower case alphabets
 * @c: paramenter to be checked
 * Return: on success 1 else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
