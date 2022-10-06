#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free.
  *
  * @ptr: pointer to the memory previously allocated with a
  * call to ``` malloc : malloc(old_size) ```.
  * @old_size: size in bytes allocated for ptr.
  * @new_size: size in bytes of new memory block.
  *
  * Return: pointer to new mem block, NULL or ptr.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (pt);
		for (i = 0; i < old_size; i++)
			pt[i] = *((char *)ptr + 1);
		free(ptr);
		ptr = NULL;
	}
	return (pt);
}
