#include "main.h"

/**
 * _isdigit - checks if its a number
 *
 * @c: value to be checked
 * Return: ALways 0 or 1
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
