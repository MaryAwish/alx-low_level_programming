#include "main.h"

/**
 * factorial - prints factorial
 * @n: integer
 * Return: always successful
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
