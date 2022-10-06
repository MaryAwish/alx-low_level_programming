#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: no of elements in an array
 * @size: size of bytes
 * Return: _callocs returns Null on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (s != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			s[i] = 0;
		return (s);
	}
	else
		return (NULL);
}
