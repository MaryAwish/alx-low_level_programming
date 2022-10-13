#include "function_pointers.h"

/**
 * array_iterator - executes function given as a parameter on each element
 * of an array
 *
 * @array: the array
 * @size: size of an array
 * @action: pointer to function
 * Return: Null on failure
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
