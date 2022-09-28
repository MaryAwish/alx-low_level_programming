#include "main.h"

/**
 * _pow_recursion - calculating the power of an integer
 *
 * @x: integer
 * @y: power
 * Return: Always successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
