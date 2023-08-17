#include "main.h"
/**
 * print_most_numbers - prints NO 1 - 9 except 2 && 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
		}
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
