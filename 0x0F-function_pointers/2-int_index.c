#include "function_pointers.h"

/**
 * int_index - searches for an integer/ returns index of the 1st element
 * @array: the array of elements
 * @size: number of elsmets in array
 * @cmp: pointer to the function to be used to comapare values
 *
 * Return: if no element matches or size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
