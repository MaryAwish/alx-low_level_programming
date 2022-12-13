#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: the string
 * Return: Always 0
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
