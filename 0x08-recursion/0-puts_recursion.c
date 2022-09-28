#include "main.h"

/**
 * _puts_recursion - it prints a string
 *
 * @s: the string
 * Return: always successful
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
