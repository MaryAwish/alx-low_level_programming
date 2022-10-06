#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *chk = malloc(b);

	if (chk == NULL)
		exit(98);
	return (chk);
}
