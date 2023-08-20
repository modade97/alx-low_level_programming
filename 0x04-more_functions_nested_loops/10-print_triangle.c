#include "main.h"
/**
 * print_triangle - main function
 * @size: function parameter
 * Return: nothing
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		if ((size == 0) || (size < 0))
			_putchar('\n');
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
