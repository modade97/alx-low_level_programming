#include "main.h"
/**
 * print_sign - checks for numbers that are >, < or = 0
 * @n: function parameter
 * Return: 1 if > 0, 0 == 0, -1 < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
