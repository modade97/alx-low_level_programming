#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int sd_char = '0' + n;

		putchar(sd_char);
	}
	putchar('\n');
	return (0);
}
