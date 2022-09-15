#include "main.h"

/**
 * print_square - print squares
 *
 * @size: the size of square
 * Return: Always 0
*/

void print_square(int size)
{
	int a;
	int b;

	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

