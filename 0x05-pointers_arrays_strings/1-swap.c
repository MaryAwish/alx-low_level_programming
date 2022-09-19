#include "main.h"

/**
 * swap_int - swaps integers
 *
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
