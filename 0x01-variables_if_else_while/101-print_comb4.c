#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int l;
	int m;
	int n;

	for (l = 0; l < 10; ++l)
	{
		for (m = l + 1; m < 10; ++m)
		{
			for (n = m + 1; n < 10; ++n)
			{
				putchar(l + '0');
				putchar(m + '0');
				putchar(n + '0');
				if (l != 7 || m != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

