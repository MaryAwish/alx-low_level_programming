#include "main.h"

/**
 * puts_half - prints the last half of trhe string
 *
 * @str: the string
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
