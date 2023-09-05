#include "main.h"
/**
 * _puts - function prints out string and a new line
 * @str: function parameter also a pointer
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
