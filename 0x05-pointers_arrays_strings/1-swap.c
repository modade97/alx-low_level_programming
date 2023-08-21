#include "main.h"
/**
 * swap_int - function swaps two numbers
 * @a: function parameter also a pointer
 * @b: function parameter also a pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
