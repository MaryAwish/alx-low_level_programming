#include "main.h"

/**
 * _strlen - finds length of a string
 * @s: the string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int ch = 0;

	while (*s != '\0')
	{
		ch++;
		s++;
	}
	return (ch);
}
