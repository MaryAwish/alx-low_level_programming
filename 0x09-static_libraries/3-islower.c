#include "main.h"

/**
 * Descrription:  _islower - checks for lowercase character
 *
 * @c: letter tested
 * Return: Always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
