#include "main.h"
/**
 * jack_bauer - 24 hour countdown function clock
 * Return: void
 */

void jack_bauer(void)
{
	int m, n;

	for (m = 0; m < 60; m++)
	{
		for (n = 0; n < 24; n++)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
