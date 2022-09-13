#include "main.h"

/**
 * _abs - prints the absolute alue of an integer.
 *
 * @n: integer
 * Return: always 0
*/

int _abs(int n)
{
	if (n > 0)
	{
		n = n;
	}
	else if (n < 0)
	{
		n = -n;
	}
	else if (n == 0)
	{
		n = 0;
	}
	return (n);
}
