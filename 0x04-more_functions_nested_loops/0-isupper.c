#include "main.h"
/**
 * _isupper - functions checks for the upper case alphabets
 * @c: function parameter
 * Return: always 1 if true && 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
