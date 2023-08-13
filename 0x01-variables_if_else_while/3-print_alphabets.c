#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	char alpbt;

	for (alpbt = 'a'; alpbt <= 'z'; alpbt++)
	{
		putchar(alpbt);
	}
	for (alpbt = 'A'; alpbt <= 'Z'; alpbt++)
	{
		putchar(alpbt);
	}
	putchar('\n');
	return (0);
}
