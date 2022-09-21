#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: integer 1
 * @n: no of elements
 * Return: Always successful
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
