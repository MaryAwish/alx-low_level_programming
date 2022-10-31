#include "main.h"

/**
 * print_binary - prints binary rerp of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;

		if (new & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
