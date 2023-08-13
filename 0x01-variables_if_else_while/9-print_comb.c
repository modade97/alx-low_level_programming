#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	putchar('0');

	for (int n = 1; n <= 9; n++)
	{
		putchar(',');
		putchar(' ');
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
