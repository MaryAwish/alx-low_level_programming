#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: the string
 * @index: starting from 0
 * Return: 1 if successful -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
