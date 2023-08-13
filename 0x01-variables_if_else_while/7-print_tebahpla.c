#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alpbt;

	for (alpbt = 'z'; alpbt >= 'a'; alpbt--)
	{
		if (alpbt != '`')
		{
			putchar(alpbt);
		}
	}
	putchar(alpbt);
	return (0);
}
