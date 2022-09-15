#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints triangle
 *
 * @size: height of triangle
 * Return: Always 0
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = size - 1 - i; k > 0; k--)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
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
