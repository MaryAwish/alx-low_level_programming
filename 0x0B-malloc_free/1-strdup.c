#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a new string which
 * is a duplicate of str
 *
 * @str: string to be copied
 * Return: Null if unsuccessful
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	if (!str)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];
	return (s);
}
