#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 9)
		{
			putchar(n + '0');
			putchar(' ');
		}
		else
		{	putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
