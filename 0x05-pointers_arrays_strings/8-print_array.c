#include "main.h"
#include <stdio.h>
/**
 * print_array - main function
 * @a: function parameter also a pointer
 * @n: function parameter also a pointer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
