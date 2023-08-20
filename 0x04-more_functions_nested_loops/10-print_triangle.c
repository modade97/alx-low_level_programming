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

	for (i = 0; i < size; i++)
	{
		if ((size == 0) || (size < 0))
			_putchar('\n');
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
