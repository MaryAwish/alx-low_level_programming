#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * to get from one number to another
 * @n: string 1
 * @m: string 2
 * Return: void
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int new;
	unsigned long int exl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		new = exl >> i;
		if (new & 1)
			count++;
	}
	return (count);
}
