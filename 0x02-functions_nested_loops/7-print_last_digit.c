#include "main.h"
/**
 * print_last_digit - function prints out last digit of a number
 * @n: function parameter
 * Return: always > 0
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;

	if (n < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
