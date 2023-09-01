#include "main.h"

/**
 * _print_rev_recursion - function print a string in reverse with recursion
 * @s: function parameter also a pointer
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
