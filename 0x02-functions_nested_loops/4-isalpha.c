#include "main.h"
/**
 * _isalpha - checks for letters and alphabets.
 *@c: Function parameter
 * Return: always 1 if true else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
