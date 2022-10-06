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

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		pt = malloc(new_size);
		if (pt != NULL)
		{
			for (i = 0; i < (old_size || i < new_size); i++)
				*((char *)pt + i) = *((char *) ptr + i);
			free(ptr);
			return (pt);
		}
		else
			return (NULL);
	}
}
