#include "main.h"

/**
 * Description: print_alphabet - prints alphabets
 *
 * Return: 0 when successful
*/

void print_alphabet(void)
{
	char al = 'a';

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}

	_putchar('\n');
}
