#include "main.h"
/**
 * _sqrt_recursion - prints square root
 *
 * @n: integer
 * Return: always succsseccful
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 *
 * @n: integer
 * @sqr: square root
 * Return: integer
 */

int square(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (square(n, sqr + 1));
	else
		return (-1);
}
