#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: string
 * @accept: string where searched bytes are locates
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
