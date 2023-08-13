#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alfbt;

	for (alfbt = 'a'; alfbt <= 'z'; alfbt++)
	{
		if (alfbt != 'e' && alfbt != 'q')
		{
			putchar(alfbt);
		}
	}
	putchar('\n');
	return (0);
}
