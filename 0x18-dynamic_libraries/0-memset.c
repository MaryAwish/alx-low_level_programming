#include "main.h"

/**
 * _memset - fills memory with constant byte
 *
 * @s: memory area
 * @b: constant byte
 * @n: first n bytes of memory
 * Return: to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
