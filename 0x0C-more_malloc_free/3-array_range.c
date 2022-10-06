#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: Null if min > max & malloc fails
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j = 0;

	if (min > max)
		return (NULL);
	i = (max - min + 1);

	a = malloc(i * sizeof(int));

	if (!a)
		return (NULL);
	for (j = 0; j < i; j++)
		*(a + j) = min + j;
	return (a);
}
