#include "main.h"

/**
 * is_prime_number - checks if its prime nummber
 *
 * @n: integer
 * Return: if prime number 1 else 0
 */

int is_prime_number(int n)
{
	int b = n / 2;

	if (n <= 1)
		return (0);
	return (checks_prime(n, b));
}

/**
 * checks_prime - check all number < n if they can divide it
 * @n: integer
 * @b: integer
 * Return: 0 or 1
 */

int checks_prime(int n, int b)
{
	if (b <= 1)
		return (1);
	else if (n % b == 0)
		return (0);
	else
		return (checks_prime(n, b - 1));
}
