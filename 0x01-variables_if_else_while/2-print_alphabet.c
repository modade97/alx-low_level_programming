#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alphabet = 'a'; /* starts with letter a */

	while (alphabet <= 'z')

	{
		printf("%c", alphabet);
		alphabet++; /* keeps adding new alphabets until 'z' */
	}
	printf("\n");
	return (0);
}
