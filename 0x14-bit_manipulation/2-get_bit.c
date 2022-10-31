#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the string
 * @index: starting from 0 of the bit you want to get
 * Return: value of the bit at index or -1 if erroe
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
