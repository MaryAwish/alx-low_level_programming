#include "main.h"

/**
 * print_sign - prints signs
 *
 * @n: check digits
 * Return: 0 or 1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		n = -1;
		_putchar('-');
	}
	return (n);
}
