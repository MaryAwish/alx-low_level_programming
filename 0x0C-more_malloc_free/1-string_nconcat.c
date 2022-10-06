#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string
 *
 * @s1: string 1
 * @s2: string 2
 * @n: index
 * Return: Null if unsuccessful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sz1] != '\0')
		sz1++;
	while (s2[sz2] != '\0')
		sz2++;

	if (n > sz2)
		n = sz2;

	s = malloc(sizeof(char) * (sz1 + n + 1));
	if (s == NULL)
		return (0);
	for (i = 0; i < sz1; i++)
		s[i] = s1[i];
	for (; i < (sz1 + n); i++)
		s[i] = s2[i - sz1];
	s[i] = '\0';

	return (s);
}
