#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: input
 * Return: Always 0
*/

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * (n % 10);
	}
	else
		x = n % 10;
	_putchar(x + '0');
	return (x);
}
