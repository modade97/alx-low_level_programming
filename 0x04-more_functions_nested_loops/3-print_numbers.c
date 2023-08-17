#include "main.h"
/**
 * print_numbers - functionprints numbers 1 through 9
 * Return: returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
