#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: the string
 * @index: statts from 0
 * Return: 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
