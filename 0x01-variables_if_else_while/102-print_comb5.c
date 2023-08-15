#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	for (int m = 0; m < 100; ++m)
	{
		for (int n = m; n < 100; ++n)
		{
			int m1 = m / 10;
			int m2 = m % 10;
			int n1 = n / 10;
			int n2 = n % 10;

			putchar(m1 + '0');
			putchar(m2 + '0');
			putchar(' ');
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (m != 99 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
