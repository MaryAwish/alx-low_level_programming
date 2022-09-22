#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @n: character
 * Return: Always successful
 */

char *string_toupper(char *n)
{
	int j;

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] -= 32;
		}
	}
	return (n);
}
