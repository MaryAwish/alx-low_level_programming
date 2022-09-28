#include "main.h"

/**
 * is_prime_number - checks if its prime nummber
 *
 * @n: integer
 * Return: if prime number 1 else 0
 */

int is_prime_number(int n)
{
	return (checks_prime(n, 2));
}

/**
 * checks_prime - check all number < n if they can divide it
 * @n: integer
 * @b: integer
 * Return: 0 or 1
 */

int checks_prime(int n, int b)
{
	if (b >= n && n > 1)
		return (1);
	else if (n % b == 0 || n < 1)
		return (0);
	else
		return (checks_prime(n, b + 1));
}
