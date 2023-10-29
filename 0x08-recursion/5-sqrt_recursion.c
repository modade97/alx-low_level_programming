#include "main.h"

/**
 * _sqrt_recursion - function returns natural square root of n
 *
 * @n: function parameter
 *
 * Return: natural square root on success -1 on fail.
 */

int _sqrt_recursion(int n)
{
	int next_guess = (guess + n / guess) / 2;

	if (next_guess >= guess)
		return (guess);
	else
		return (_sqrt_recursion(n, next_guess));
}

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_recursion(n, n));
}
