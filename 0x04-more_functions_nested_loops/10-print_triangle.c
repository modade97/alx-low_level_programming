#include "main.h"
/**
 * print_triangle - main function
 * @size: function parameter
 * Return: nothing
 */

void print_triangle(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < i; j++)
			_putchar('#');
		if (j != i)
			_putchar(' ');
		_putchar('\n');
	}
}
